(function($) {
    $(function(){
        fixLocationBackground();
        $(window).load(fixLocationBackground).resize(fixLocationBackground);
    });

    function fixLocationBackground()
    {
        $("body.node-type-location #block-system-main .field-name-field-image img").each(function(){
            var height = $(".field-name-body").height() + $(".tabs").height() + $("#page-title").height() - 10;
            $(this).height(height).css("margin-top", -1*($("#page-title").height() - 5) + "px");
        });
    }
}(jQuery));
