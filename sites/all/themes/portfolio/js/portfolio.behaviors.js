(function ($) {

  Drupal.behaviors.portfolioContact = {
    attach: function (context, settings) {

      $('#block-system-main-menu .last a').attr('href','#');

      $('#contact').click(function(e){
        e.preventDefault();
        $('.l-contact').toggleClass('contact-open');
        $('#block-system-main-menu .last').toggleClass('active');
      });

    }
  };


  Drupal.behaviors.mobileMenu = {
    attach: function (context, settings) {

      $('.burger-btn').click(function() {
        $('body').toggleClass('mobile-menu-open');

      });

    }
  };


})(jQuery);
