// Generated by CoffeeScript 1.10.0
(function() {
  var BrowserWindow, app, begin, checks, delay, mainWindow, setup, spawn;

  checks = require('./libs/checks.js');

  spawn = require('child_process').spawn;

  delay = require('delayed').delay;

  begin = require('./libs/setup.js').begin;

  setup = function(root) {
    return checks.checkBash;
  };

  app = require('app');

  BrowserWindow = require('browser-window');

  require('crash-reporter').start();

  mainWindow = null;

  app.on('window-all-closed', function() {
    if (process.platform !== 'darwin') {
      app.quit();
    }
  });

  app.on('ready', function() {
    mainWindow = new BrowserWindow({
      width: 800,
      height: 600
    });
    mainWindow.loadUrl('file://' + __dirname + '/views/index.html');
    begin('gui', mainWindow);
    mainWindow.on('closed', function() {
      mainWindow = null;
    });
  });

}).call(this);
