(function($) {
    $(function(){
        $("form#webform-client-form-48").each(function(){
            if ($("body").hasClass("belle-river"))
            {
                $("#edit-submitted-location").val("tid_4");
            }
            else if ($("body").hasClass("chatham-kent"))
            {
                $("#edit-submitted-location").val("tid_1");
            }
            else if ($("body").hasClass("pelee-island"))
            {
                $("#edit-submitted-location").val("tid_5");
            }
            else if ($("body").hasClass("sarnia-lambton"))
            {
                $("#edit-submitted-location").val("tid_2");
            }
            else if ($("body").hasClass("windsor-essex"))
            {
                $("#edit-submitted-location").val("tid_3");
            }

        });
    });
}(jQuery));
