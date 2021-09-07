
#process for getting script file directory
variable dispScriptFile [file normalize [info script]]
proc getScriptDirectory {} {
    variable dispScriptFile
    set scriptFolder [file dirname $dispScriptFile]
    return $scriptFolder
}

#change working directory to script file directory
cd [getScriptDirectory]
#set ip_repo_path to script dir
set ip_repo_path [getScriptDirectory]

# PACKAGE VGA IP
source $ip_repo_path\/Upsampling_IP\/src\/script\/Upsampling.tcl

# CREATE IP BLOCK DIAGRAM
source $ip_repo_path\/Top\/Top.tcl
