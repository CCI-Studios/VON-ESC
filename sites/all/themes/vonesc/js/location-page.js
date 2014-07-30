(function($) {
    $(function(){
        fixLocationBackground();
        $(window).resize(fixLocationBackground);
    });

    function fixLocationBackground()
    {
        $("body.node-type-location #block-system-main .field-name-field-image img").each(function(){
            var height = $("#main-wrapper").height() + $("#page-title").height() - 10;
            $(this).height(height).css("margin-top", -1*($("#page-title").height() - 5) + "px");
        });
    }
}(jQuery));
