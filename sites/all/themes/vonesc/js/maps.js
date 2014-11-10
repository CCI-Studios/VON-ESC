(function($) {
    var map;
    var geocoder;

    $(function(){
        $(".view-contact .views-field-field-address a").click(click);
        if ($("#gmap").length > 0)
            mapInit();
    });

    function click()
    {
        var address = $(this).text();
        var nid = $(this).data("nid");

        showMap(address);
        makeActive($(this));

        return false;
    }

    function mapInit()
    {
        geocoder = new google.maps.Geocoder();
        var mapOptions = {
            zoom: getZoom()
        }
        map = new google.maps.Map(document.getElementById('gmap'), mapOptions);

        var $first = $(".view-contact .views-field-field-address a").eq(0);
        makeActive($first);
        showMap($first.text());
        showMarkers();
    }
    function getZoom()
    {
        if ($("body").hasClass("page-node-77"))
        {
            return 7;
        }
        return 15;
    }

    function showMarkers()
    {
        $(".view-contact .views-field-field-address a").each(function(){
            var address = $(this).text();
            getAddressLatLng(address, showMarkerLatLng);
        });
    }
    function showMarkerLatLng(latlng, address)
    {
        var marker = new google.maps.Marker({
            map: map,
            position: latlng,
            icon: getMarkerIcon(address)
        });
    }
    function getMarkerIcon(address)
    {
        var icon = "/sites/all/themes/vonesc/images/map-marker-";

        if (address.toLowerCase().indexOf("chatham") > -1)
        {
            icon += "ck";
        }
        else if (address.toLowerCase().indexOf("sarnia") > -1)
        {
            icon += "sl";
        }
        else if (address.toLowerCase().indexOf("belle") > -1)
        {
            icon += "br";
        }
        else if (address.toLowerCase().indexOf("pelee") > -1)
        {
            icon += "pi";
        }
        else
        {
            icon += "we";
        }
        icon += ".png";
        return {
            "url":icon,
            "origin":new google.maps.Point(0,0),
            "anchor":new google.maps.Point(19,38),
        };
    }

    function showMap(address)
    {
        getAddressLatLng(address, showMapLatLng);
    }
    function showMapLatLng(latlng)
    {
        map.setCenter(latlng);
    }

    function getAddressLatLng(address, callback)
    {
        geocoder.geocode( { 'address':address}, function(results, status) {
            if (status == google.maps.GeocoderStatus.OK) {
                callback(results[0].geometry.location, address);
            } else {
                //alert('Geocode was not successful for the following reason: ' + status);
            }
        });
    }

    function makeActive($active)
    {
        $(".view-contact .views-field-field-address a").removeClass("active");
        $active.addClass("active");
    }
}(jQuery));
