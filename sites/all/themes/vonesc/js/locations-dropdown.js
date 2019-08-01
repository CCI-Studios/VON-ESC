(function($) {
    $(function(){
        $("ul.locations-dropdown").each(function(){
            $(this).find("li:first-child").after("<a href='#' class='open-btn'>Open Dropdown</a>");
            $(this).find("a.open-btn, li.select-city a").click(toggle);
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
        var maxHeight = "240px";
        if ($ul.hasClass("small"))
        {
            maxHeight = "149px";
        }
        $ul.addClass("open").animate({"max-height":maxHeight}, 200);
    }

    function closeAll()
    {
        $("ul.locations-dropdown.open").each(function(){
            var maxHeight = "40px";
            if ($(this).hasClass("small"))
            {
                maxHeight = "26px";
            }
            $(this).removeClass("open").css("max-height",$(this).outerHeight()).animate({"max-height":maxHeight}, 200);
        });
    }
}(jQuery));
