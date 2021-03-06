\alias{gFileMonitorFile}
\name{gFileMonitorFile}
\title{gFileMonitorFile}
\description{Obtains a file monitor for the given file. If no file notification
mechanism exists, then regular polling of the file is used.}
\usage{gFileMonitorFile(object, flags = "G_FILE_MONITOR_NONE", cancellable = NULL, 
    .errwarn = TRUE)}
\arguments{
\item{\verb{object}}{input \code{\link{GFile}}.}
\item{\verb{flags}}{a set of \code{\link{GFileMonitorFlags}}.}
\item{\verb{cancellable}}{optional \code{\link{GCancellable}} object, \code{NULL} to ignore.}
\item{.errwarn}{Whether to issue a warning on error or fail silently}
}
\details{If \code{cancellable} is not \code{NULL}, then the operation can be cancelled by
triggering the cancellable object from another thread. If the operation
was cancelled, the error \code{G_IO_ERROR_CANCELLED} will be returned.}
\value{
A list containing the following elements:
\item{retval}{[\code{\link{GFileMonitor}}] a \code{\link{GFileMonitor}} for the given \code{file}, or \code{NULL} on error.}
\item{\verb{error}}{a \code{\link{GError}}, or \code{NULL}.}
}
\author{Derived by RGtkGen from GTK+ documentation}
\keyword{internal}
