NAME = template
TARGETPDF = $(NAME).pdf
BUILDDIR = $(NAME)-pdf

CONFIG = $(NAME).yaml

# add new review file here
DEPFILES = 00-introduction.re \
	   01-chapter1.re \
	   99-conclusion.re

# command
PDFMAKE := review-pdfmaker

$(TARGETPDF): $(CONFIG) $(DEPFILES)
	rm $(TARGETPDF) 2>/dev/null || echo "no pdf exists: clean build"
	rm -r $(BUILDDIR) 2>/dev/null || echo "no builddir exists: clean build"
	$(PDFMAKE) $(CONFIG)

clean:
	rm $(TARGETPDF) 2>/dev/null || echo "cleaning but no pdf there"
	rm -r $(BUILDDIR) 2>/dev/null || echo "no builddir exists: clean build"
