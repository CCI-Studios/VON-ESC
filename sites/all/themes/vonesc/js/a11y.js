(function($) {
    $(function(){
        $("#block-system-main-menu .content > ul > li").each(function(){
            var text = $(this).find("> a").text();
            $(this).find("ul li").prepend("<span class='element-invisible'>"+text+"</span>");
        });
    });
}(jQuery));
