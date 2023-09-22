#include <kore/kore.h>
#include <kore/http.h>

int		page(struct http_request *);

int
page(struct http_request *req)
{
	char body[] = "Hello, Kore!!";
	http_response(req, 200, body, sizeof(body));
	return (KORE_RESULT_OK);
}
