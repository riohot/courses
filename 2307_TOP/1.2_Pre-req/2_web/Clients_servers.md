# Clients and servers

CLIENTS: Are the typical internet-linked devices
SERVER: Computers that store webpages, sites or apps

When a client device wants to acess a webpage - a copy of the webpage is downloaded from the server onto the client machine to be displayed in the users web browser.

This is not the whole story.

Internet connection: Allows you to send and get data on the web.

- Its basically like the street between your house and the shop.

TCP/IP: Transmission Control Protocol/Internet Protocol
These are comms protocols that define how data should travel across the internet

- This is liek a car or a bike or however you might transport about

DNS: Domain name sysem

- Address book for websites
- When you type a web address in your browser > the browser looks at the DNS to find the websites IP address
- The browser needs to find out which server the website lives on so it can send HTTP messages to the right place
- These is like looking up the address of the shop so you can access it.

HTTP: Hypertext Transfer Protocol

- An application protocol that defines a language for clients and servers to speak to each other.
- This is like the language that you use to order your goods

Component files

- A website is made up of many different files (like the different parts of the goods you buy from the shop) These files come in town main types:

-- Code files: html, css, JS
-- Assets: media

# SO WHAT HAPPENS EXACTLY

1. The browser goes to the DNS server and finds the real address of the server that the website lives on

2. The browser sends an HTTP reequest message to the server, asking it to send a copy of the website to the client > This message, and all other data sent berween the client and the server is sent across your internet connection using TCP/IP

3. If the server approces the client request - the server sends the client a "200 ok message" and then starts sending the websites files to the browser as a series of small chunks (DATA Packets)

(Packets sent in small parts which are less easy to corrupt + sent in different paths, making exchange faster

if each website was sent as a single big chink, only one user could DL it at a single time
)

4. The browser assembles the small chunks into a complete web page and displays it to you.

💻 ORDER

When browers send reqs to servers for HTML files, those files contain LINK to CSS stylesheet and JS scripts

Parses HTML > sends req to server for CSS found in <Link> + JS scripts. > The browser generates an in-memory DOM tree from the parsed HTML + CSSOM and comiles and exectures the parsed JS

Dom TREE = HTML > body > h1> divs etc etc etc
