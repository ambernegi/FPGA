document.addEventListener("DOMContentLoaded", function() {
       // Ensure primary navigation is fully expanded
       const primaryNav = document.querySelector(".md-nav--primary");
       if (primaryNav) {
           primaryNav.querySelectorAll(".md-nav__item--nested").forEach(item => {
               item.classList.add("md-nav__item--expanded");
           });
       }
   });
