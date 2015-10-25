mkdir = require '../build/Release/mkdir'

exports.init = (args) ->
  # body...
  mkdir.mkdir('.web/tmp')
  mkdir.mkdir('.web/download')
  mkdir.mkdir('.web/config')

exports.install = (name) ->
  # body...
  mkdir.mkdir('.web/server/certs')
  # mkdir.mkdir('.web/'+name+'/tmp')
  # mkdir.mkdir('.web/'+name+'/tubs')
