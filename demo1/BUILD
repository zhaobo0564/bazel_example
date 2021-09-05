cc_library(
	name = "demo1",
	srcs = glob(["*.cc"]),
	hdrs = glob(["*.h"]),
)

cc_binary(
	name = "main",
	srcs = ["main.cc"],
	deps = [
		":demo1",
	],
)
