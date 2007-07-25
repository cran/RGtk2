\alias{gdkEventGet}
\name{gdkEventGet}
\title{gdkEventGet}
\description{Checks all open displays for a \code{\link{GdkEvent}} to process,to be processed
on, fetching events from the windowing system if necessary.
See \code{\link{gdkDisplayGetEvent}}.}
\usage{gdkEventGet()}
\value{[\code{\link{GdkEvent}}]  the next \code{\link{GdkEvent}} to be processed, or \code{NULL} if no events
are pending.}
\section{encoding}{UTF-8}
\author{Derived by RGtkGen from GTK+ documentation}
\keyword{internal}
