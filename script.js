// Get the button element.
const scrollToTopButton = document.getElementById("scrollToTopBtn");

// Function to show or hide the button based on scroll position
function toggleScrollToTopButton() {
  if (window.scrollY > 300) {
    scrollToTopButton.classList.add("show");
  } else {
    scrollToTopButton.classList.remove("show");
  }
}

// Function to scroll to the top of the page when button is clicked.
function scrollToTop() {
  window.scrollTo({
    top: 0,
    behavior: "smooth"
  });
}

// Event listener to check scroll position and show/hide the button accordingly.
window.addEventListener("scroll", toggleScrollToTopButton);


// =======================================================

const deviceWidth = screen.width;
console.log(deviceWidth)
// if (deviceWidth<=840){

// } 
const viewportWidth = window.innerWidth;
console.log(viewportWidth);


if (viewportWidth<=840){

  const toggleButton = document.getElementById('toggleButton');
  const navList = document.getElementById('navList');
  const linkedin=document.getElementsByClassName('linkedin-button')[0];

  toggleButton.addEventListener('click', () => {
    if (navList.style.display === 'block') {
      
      navList.style.display = 'none';
      linkedin.style.display='none';
      toggleButton.classList.remove('cross-button');
      toggleButton.classList.add('hamburger-button');
    } else {

      linkedin.style.display='block';
      navList.style.display = 'block';
      toggleButton.classList.remove('hamburger-button');
      toggleButton.classList.add('cross-button');
    }
  });


  // li click respond to anchor click.
  const navItems = document.querySelectorAll('.nav-item');

  function activateAnchor(event) {
    const anchor = event.currentTarget.querySelector('a');
    if (anchor) {
      anchor.click();

      linkedin.style.display='none';
      navList.style.display = 'none'; // Close the navigation list when a link is clicked.
      toggleButton.classList.remove('cross-button');
      toggleButton.classList.add('hamburger-button');
      
    }
  }

  navItems.forEach(item => {
    item.addEventListener('click', activateAnchor);
  });



}
