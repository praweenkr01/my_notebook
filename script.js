// Get the button element
const scrollToTopButton = document.getElementById("scrollToTopBtn");

// Function to show or hide the button based on scroll position
function toggleScrollToTopButton() {
  if (window.scrollY > 300) {
    scrollToTopButton.classList.add("show");
  } else {
    scrollToTopButton.classList.remove("show");
  }
}

// Function to scroll to the top of the page when button is clicked
function scrollToTop() {
  window.scrollTo({
    top: 0,
    behavior: "smooth"
  });
}

// Event listener to check scroll position and show/hide the button accordingly
window.addEventListener("scroll", toggleScrollToTopButton);
