\alias{gSocketClientConnectToServiceFinish}
\name{gSocketClientConnectToServiceFinish}
\title{gSocketClientConnectToServiceFinish}
\description{Finishes an async connect operation. See \code{\link{gSocketClientConnectToServiceAsync}}}
\usage{gSocketClientConnectToServiceFinish(object, result, .errwarn = TRUE)}
\arguments{
\item{\verb{object}}{a \code{\link{GSocketClient}}.}
\item{\verb{result}}{a \code{\link{GAsyncResult}}.}
\item{.errwarn}{Whether to issue a warning on error or fail silently}
}
\details{Since 2.22}
\value{
A list containing the following elements:
\item{retval}{[\code{\link{GSocketConnection}}] a \code{\link{GSocketConnection}} on success, \code{NULL} on error.}
\item{\verb{error}}{a \code{\link{GError}} location to store the error occuring, or \code{NULL} to
ignore.}
}
\author{Derived by RGtkGen from GTK+ documentation}
\keyword{internal}
