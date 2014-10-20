(function($) {
    var timer = null;
    var maxHeight = 0;

    $(function(){
        createIndicators();
        setActive(0);
        timer = setInterval(next, 5000);
        $(window).resize(function(){
            maxHeight = 0;
            fixHeight();
        });
        fixHeight();
        setTimeout(fixHeight, 200);
    });
    $(window).load(fixHeight);

    function container()
    {
        return $(".view-header-slideshow, .view-header-slideshow-location-");
    }
    function rows()
    {
        return container().find(".views-row");
    }
    function indicators()
    {
        return container().find(".indicators li");
    }
    function getActive()
    {
        return rows().filter(".active");
    }
    function getActiveIndex()
    {
        return getActive().index();
    }
    function setActive(i)
    {
        var current = getActive()
        if (i == current.index())
        {
            return;
        }

        current.addClass("outbound").removeClass("active");
        rows().eq(i).addClass("active").hide().fadeIn(function(){
            current.removeClass("outbound").hide();
        });
        fixHeight();

        indicators().removeClass("active").eq(i).addClass("active");
    }
    function fixHeight()
    {
        var h = getActive().find("> div").height();
        if (h > maxHeight)
        {
            rows().height(h).parent().height(h);
            maxHeight = h;
        }
    }
    function max()
    {
        return rows().length-1;
    }
    function next()
    {
        var i = getActiveIndex();
        i++;
        if (i > max())
        {
            i = 0;
        }

        setActive(i);
    }
    function stop()
    {
        clearInterval(timer);
    }

    function createIndicators()
    {
        container().append("<ul class='indicators' />");
        var indicatorsContainer = container().find(".indicators")
        rows().each(function(i){
            indicatorsContainer.append("<li><a href='#' data-indicator='"+i+"'>Activate slide "+i+"</a></li>");
        });
        indicatorsContainer.find("a").click(function(){
            indicatorClick($(this).data("indicator"));
            return false;
        });
    }
    function indicatorClick(i)
    {
        setActive(i);
        stop();
    }
}(jQuery));
