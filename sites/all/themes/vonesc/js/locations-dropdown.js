(function($) {
    $(function(){
        $("ul.locations-dropdown").each(function(){
            $(this).find("li:first-child").after("<a href='#' class='open-btn'>Open Dropdown</a>");
            $(this).find("a.open-btn").click(toggle);
            $(this).find("a").click(function(e){
                e.stopPropagation();
            });
            $(this).after("<div class='locations-dropdown-placeholder'>&nbsp;</div>");
        });

        $("body").click(closeAll);
    });
    
    function toggle()
    {
        $ul = $(this).parents("ul.locations-dropdown");
        if ($ul.hasClass("open"))
        {
            closeAll();
        }
        else
        {
            open($ul);
        }
        return false;
    }

    function open($ul)
    {
        $ul.addClass("open").animate({"max-height":"204px"});
    }

    function closeAll()
    {
        $("ul.locations-dropdown.open").each(function(){
            $(this).removeClass("open").css("max-height",$(this).outerHeight()).animate({"max-height":"40px"});
        });
    }
}(jQuery));
