\alias{gdkAtomName}
\name{gdkAtomName}
\title{gdkAtomName}
\description{Determines the string corresponding to an atom.}
\usage{gdkAtomName(atom)}
\arguments{\item{\code{atom}}{[\code{\link{GdkAtom}}] a \code{\link{GdkAtom}}.}}
\value{[character] a newly-allocated string containing the string
          corresponding to \code{atom}. When you are done
          with the return value, you should free it 
          using \code{g\Free()}.}
\author{Derived by RGtkGen from GTK+ documentation}
\keyword{internal}