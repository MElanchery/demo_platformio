Import("env")

env['PROJECTSRC_DIR'] = env['PROJECT_DIR'] + "\\src\\" + env["PIOENV"]

print("Setting the project directory to: {}".format(env['PROJECTSRC_DIR']))