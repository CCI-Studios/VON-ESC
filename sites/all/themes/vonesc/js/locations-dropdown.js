(function($) {
    $(function(){
        $("ul.locations-dropdown").each(function(){
            $(this).find("li:first-child").after("<a href='#' class='open-btn'>Open Dropdown</a>");
            $(this).find("a.open-btn").click(open);
            $(this).find("a").click(function(e){
                e.stopPropagation();
            });
            $(this).after("<div class='locations-dropdown-placeholder'>&nbsp;</div>");
        });

        $("body").click(close);
    });

    function open(e)
    {
        $(this).parents("ul.locations-dropdown").toggleClass("open");

        return false;
    }

    function close()
    {
        $("ul.locations-dropdown").removeClass("open");
    }
}(jQuery));
