let addressNT = document.getElementById('connect-address-nt'),
  addressVC = document.getElementById('connect-address-vc'),
  connect = document.getElementById('connect'),
  buttonConnect = document.getElementById('connect-button');
let VCClientClass = require("victoryconnect-client").Client;
let VCUtil = require("victoryconnect-client").Util;
let VCConst = require("victoryconnect-client").Consts;
let loginShown = true;
let VCClient = null;

// Set function to be called on NetworkTables connect. Not implemented.
//NetworkTables.addWsConnectionListener(onNetworkTablesConnection, true);

// Set function to be called when robot dis/connects
NetworkTables.addRobotConnectionListener(onRobotConnection, false);

// Sets function to be called when any NetworkTables key/value changes
//NetworkTables.addGlobalListener(onValueChanged, true);

// Function for hiding the connect box
onkeydown = key => {
  if (key.key === 'Escape') {
    document.body.classList.toggle('login', false);
    loginShown = false;
  }
};

/**
 * Function to be called when robot connects
 * @param {boolean} connected
 */
function onRobotConnection(connected) {
  var state = connected ? 'Robot connected!' : 'Robot disconnected.';
  console.log(state);
  ui.robotState.textContent = state;

  buttonConnect.onclick = () => {
    document.body.classList.toggle('login', true);
    loginShown = true;
  };
  if (connected) {
    // On connect hide the connect popup
    document.body.classList.toggle('login', false);
    loginShown = false;
  } else if (loginShown) {
    setLogin();
  }
}
function setLogin() {
  // Add Enter key handler
  // Enable the input and the button
  addressNT.disabled = connect.disabled = false;
  connect.textContent = 'Connect';
  // Add the default address and select xxxx
  addressNT.value = 'roborio-xxxx.local';
  addressNT.focus();
  addressNT.setSelectionRange(8, 12);

  addressVC.disabled = connect.disabled = false;
  connect.textContent = 'Connect';
  // Add the default address and select xxxx
  addressVC.value = 'pi-xxxx.local';
  addressVC.focus();
  addressVC.setSelectionRange(8, 12);
}
// On click try to connect and disable the input and the button
connect.onclick = () => {
  ipc.send('connect', addressNT.value);
  addressNT.disabled = connect.disabled = true;
  addressVC.disabled = connect.disabled = true;
  connect.textContent = 'Connecting...';
  VCClient = new VCClientClass("VictoryDashLite", addressVC.value, 5800);
};
addressNT.onkeydown = ev => {
  if (ev.key === 'Enter') {
    connect.click();
    ev.preventDefault();
    ev.stopPropagation();
  }
};
addressVC.onkeydown = ev => {
  if (ev.key === 'Enter') {
    connect.click();
    ev.preventDefault();
    ev.stopPropagation();
  }
};

// Show login when starting
document.body.classList.toggle('login', true);
setLogin();
