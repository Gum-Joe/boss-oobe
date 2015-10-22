fs = require 'fs'
dir = require './mkdir.js'
{execSync} = require 'child_process'


# Setup module for web-os
exports.begin = (type, main) ->
  # body...
  # Create dirs
  execSync 'mkdir .web/test'
