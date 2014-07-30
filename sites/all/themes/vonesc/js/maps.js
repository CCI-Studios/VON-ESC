(function($) {
    var map;
    var geocoder;

    $(function(){
        $(".view-contact a").click(click);
        if ($("#gmap").length > 0)
            mapInit();
    });

    function click()
    {
        var address = $(this).text();
        var nid = $(this).data("nid");

        showContactPeople(nid);
        showMap(address);
        makeActive($(this));

        return false;
    }

    function showContactPeople(nid)
    {
        var rows = $(".view-contact-people .views-row");
        rows.fadeOut();
        var $newRow = rows.filter(".nid-"+nid);
        $newRow.fadeIn();
        $(".view-contact-people").height($newRow.height()+"px");
    }

    function mapInit()
    {
        geocoder = new google.maps.Geocoder();
        var mapOptions = {
            zoom: 15
        }
        map = new google.maps.Map(document.getElementById('gmap'), mapOptions);

        var $first = $(".view-contact a").eq(0);
        makeActive($first);
        showContactPeople($first.data("nid"));
        showMap($first.text());
        showMarkers();
    }

    function showMarkers()
    {
        $(".view-contact a").each(function(){
            var address = $(this).text();
            getAddressLatLng(address, showMarkerLatLng);
        });
    }
    function showMarkerLatLng(latlng)
    {
        var marker = new google.maps.Marker({
            map: map,
            position: latlng,
            icon: getMarkerIcon()
        });
    }
    function getMarkerIcon()
    {
        var icon = "/sites/all/themes/vonesc/images/map-marker-";
        if ($("body").hasClass("belle-river"))
        {
            icon += "br";
        }
        else if ($("body").hasClass("chatham-kent"))
        {
            icon += "ck";
        }
        else if ($("body").hasClass("pelee-island"))
        {
            icon += "pi";
        }
        else if ($("body").hasClass("sarnia-lambton"))
        {
            icon += "sl";
        }
        else if ($("body").hasClass("windsor-essex"))
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
                callback(results[0].geometry.location);
            } else {
                //alert('Geocode was not successful for the following reason: ' + status);
            }
        });
    }

    function makeActive($active)
    {
        $(".view-contact a").removeClass("active");
        $active.addClass("active");
    }
}(jQuery));
