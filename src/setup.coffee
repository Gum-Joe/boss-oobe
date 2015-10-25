fs = require 'fs'
#dir = require '../mkdir.js'
{execSync} = require 'child_process'
mkdir = require '../build/Release/mkdir'



# Setup module for web-os
begin = () ->
  # body...
  # Create dirs
  console.log mkdir.mkdir('.web')
  console.log mkdir.mkdir('.web/tmp')
  console.log mkdir.mkdir('.web/download')
  console.log mkdir.mkdir('.web/config')

begin()

# Setup
install = (name) ->
  # body...
  console.log mkdir.mkdir('.web')
  console.log mkdir.mkdir('.web/'+name)
  console.log mkdir.mkdir('.web/'+name+'/tmp')
  console.log mkdir.mkdir('.web/'+name+'/tubs')

#install('server')

module.exports = begin: begin, install: install
