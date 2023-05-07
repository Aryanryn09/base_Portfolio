import React from "react";
import "./navbar.scss";
import SearchIcon from "@mui/icons-material/Search";
import NotificationsIcon from "@mui/icons-material/Notifications";
import ArrowDropDownIcon from "@mui/icons-material/ArrowDropDown";
function Navbar() {
  return (
    <div className="navbar">
      <div className="container">
        <div className="left">
          <img
            src="https://upload.wikimedia.org/wikipedia/commons/7/7a/Logonetflix.png"
            alt=""
            style={{ width: "100px" }}
          />
          <span>Homepage</span>
          <span>Series</span>
          <span>Movies</span>
          <span>News and Popular</span>
          <span>Homepage</span>
        </div>
        <div className="right">
          <SearchIcon className="icons" />
          <span>KID</span>
          <NotificationsIcon className="icons" />
          <img
            src="https://pbs.twimg.com/profile_images/1651815124095868928/3sLhjWCb_400x400.jpg"
            alt=""
          />
          <div className="profile">
            <ArrowDropDownIcon className="icons" />
            <div className="options">
              <span>Settings</span>
              <span>Logout</span>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
}

export default Navbar;
