#include <locale.h>
#include <pthread.h>

// 08/28/2018 Mopria-notice: localeconv not present in Android.
inline struct lconv *localeconv(void) {
    return NULL;
}

// 08/28/2018 Mopria-notice: pthread_cancel not present in Android
void pthread_cancel(int thread) {
    // Ignore thread cancel attempts
}
