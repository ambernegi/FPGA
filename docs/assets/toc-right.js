document.addEventListener("DOMContentLoaded", function() {
    // Expand all nested navigation items in the primary sidebar
    const primaryNav = document.querySelector(".md-sidebar--primary .md-nav--primary");
    if (primaryNav) {
        const nestedToggles = primaryNav.querySelectorAll(".md-nav__toggle");
        nestedToggles.forEach(toggle => {
            toggle.checked = true; // Expand all nested items
        });
        console.log("Expanded all nested navigation items:", nestedToggles.length, "toggles found");
    } else {
        console.warn("Primary navigation not found. Check selector .md-sidebar--primary .md-nav--primary");
    }

    // Verify TOC is present
    const secondaryNav = document.querySelector(".md-sidebar--secondary .md-nav");
    if (secondaryNav) {
        console.log("TOC found in secondary sidebar");
    } else {
        console.warn("TOC not found. Ensure page has headings or check .md-sidebar--secondary .md-nav");
    }
});
