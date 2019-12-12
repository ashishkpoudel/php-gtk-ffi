#define FFI_LIB "/usr/lib/x86_64-linux-gnu/libgtk-3.so"



typedef struct _GtkWidget GtkWidget;
typedef struct _GtkWindow GtkWindow;

typedef void* gpointer;
typedef char gchar;
typedef bool gboolean;
typedef unsigned long gulong;
typedef unsigned int gint;
typedef unsigned int guint;
typedef signed char gint8;
typedef unsigned int guint32;
typedef unsigned long gulong;
typedef double gdouble;
typedef gulong GType;

typedef struct {
  gint x;
  gint y;
  gint width;
  gint height;
} GtkAllocation;

// typedef void  (*GCallback)              (gpointer *widget, GdkEvent *data);

/**
 * https://www.cs.tut.fi/lintula/manual/gtk/gtk/gtk-standard-enumerations.html#GTKWINDOWPOSITION
 * https://lazka.github.io/pgi-docs/Gtk-3.0/enums.html
 *
 */
typedef enum
{
  GTK_WINDOW_TOPLEVEL,
  GTK_WINDOW_POPUP
} GtkWindowType;

typedef enum
{
  GTK_WIN_POS_NONE,
  GTK_WIN_POS_CENTER,
  GTK_WIN_POS_MOUSE
} GtkWindowPosition;


// GTK
void gtk_init(int *, char **[]);
void gtk_main();
void gtk_main_quit();


// GTKWINDOW
GtkWidget *gtk_window_new (GtkWindowType);
void gtk_window_set_title (GtkWindow *, const gchar *);
void gtk_window_set_resizable (GtkWindow *, gboolean);
gboolean gtk_window_get_resizable (GtkWindow *);
void gtk_window_set_modal (GtkWindow *, gboolean);
gboolean gtk_window_get_modal (GtkWindow *);
void gtk_window_set_default_size (GtkWindow *, gint, gint);
void gtk_window_get_default_size (GtkWindow *window, gint *width, gint *height);
void gtk_window_set_position (GtkWindow *, GtkWindowPosition);
void gtk_window_get_position (GtkWindow *window, gint *root_x, gint *root_y);
void gtk_window_set_transient_for (GtkWindow *, GtkWindow *);
void gtk_window_set_attached_to (GtkWindow *, GtkWidget *);
void gtk_window_set_destroy_with_parent (GtkWindow *, gboolean);
void gtk_window_set_hide_titlebar_when_maximized (GtkWindow *, gboolean);

// GTKWIDGET
GtkWidget *gtk_widget_new (GType, const gchar *, ...);
void gtk_widget_destroy (GtkWidget *);
gboolean gtk_widget_in_destruction (GtkWidget *);
void gtk_widget_destroyed (GtkWidget *, GtkWidget **);
void gtk_widget_unparent (GtkWidget *);
void gtk_widget_show (GtkWidget *);
void gtk_widget_show_now (GtkWidget *);
void gtk_widget_hide (GtkWidget *);
void gtk_widget_show_all (GtkWidget *);
void gtk_widget_map (GtkWidget *);
void gtk_widget_unmap (GtkWidget *);
void gtk_widget_realize (GtkWidget *);
void gtk_widget_queue_draw (GtkWidget *);
void gtk_widget_queue_resize (GtkWidget *);
void gtk_widget_queue_resize_no_redraw (GtkWidget *);
void gtk_widget_queue_allocate (GtkWidget *);
gint gtk_widget_get_scale_factor (GtkWidget *);
void gtk_widget_size_allocate (GtkWidget *, GtkAllocation *);

// GTKCONTAINER
typedef struct _GtkContainer GtkContainer;

void gtk_container_add (GtkContainer *container, GtkWidget *widget);