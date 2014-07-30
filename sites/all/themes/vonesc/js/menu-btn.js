(function($) {
    $(function(){
        $("#menu-btn").click(click);
        $("body").click(closeMenu);
    });

    function click(e)
    {
        toggleMenu();
        e.stopPropagation();
        return false;
    }

    function closeMenu()
    {
        if ($(window).width() <= 768 && $("#block-system-main-menu").css("display") != "none")
        {
            toggleMenu();
        }
    }

    function toggleMenu()
    {
        $("#block-system-main-menu").slideToggle();
    }
}(jQuery));
