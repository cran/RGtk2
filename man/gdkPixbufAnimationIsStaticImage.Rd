\alias{gdkPixbufAnimationIsStaticImage}
\name{gdkPixbufAnimationIsStaticImage}
\title{gdkPixbufAnimationIsStaticImage}
\description{If you load a file with \code{\link{gdkPixbufAnimationNewFromFile}} and it turns
out to be a plain, unanimated image, then this function will return
\code{TRUE}. Use \code{\link{gdkPixbufAnimationGetStaticImage}} to retrieve
the image.}
\usage{gdkPixbufAnimationIsStaticImage(object)}
\arguments{\item{\code{object}}{[\code{\link{GdkPixbufAnimation}}]  a \code{\link{GdkPixbufAnimation}}}}
\value{[logical]  \code{TRUE} if the "animation" was really just an image}
\section{encoding}{UTF-8}
\author{Derived by RGtkGen from GTK+ documentation}
\keyword{internal}
