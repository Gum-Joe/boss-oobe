fs = require 'fs'
#dir = require '../mkdir.js'
{execSync} = require 'child_process'
mkdir = require './build/Release/mkdir-windows'


# Setup module for web-os
begin = (type, main) ->
  # body...
  # Create dirs
  console.log mkdir.mkdir()

begin()
