// GTKWINDOW

GtkWidget * gtk_window_new (GtkWindowType type);

void gtk_window_set_title (GtkWindow *window, gchar *title);

// void gtk_window_set_wmclass (GtkWindow *window, gchar *wmclass_name, gchar *wmclass_class);

void gtk_window_set_resizable (GtkWindow *window, gboolean resizable);

gboolean gtk_window_get_resizable (GtkWindow *window);

// void gtk_window_add_accel_group (GtkWindow *window, GtkAccelGroup *accel_group);

// void gtk_window_remove_accel_group (GtkWindow *window, GtkAccelGroup *accel_group);

gboolean gtk_window_activate_focus (GtkWindow *window);

gboolean gtk_window_activate_default (GtkWindow *window);

void gtk_window_set_modal (GtkWindow *window, gboolean modal);

void gtk_window_set_default_size (GtkWindow *window, gint width, gint height);

// void gtk_window_set_default_geometry (GtkWindow *window, gint width, gint height);

// void gtk_window_set_geometry_hints (GtkWindow *window, GtkWidget *geometry_widget, GdkGeometry *geometry, GdkWindowHints geom_mask);

// void gtk_window_set_gravity (GtkWindow *window, GdkGravity gravity);

// GdkGravity gtk_window_get_gravity (GtkWindow *window);

void gtk_window_set_position (GtkWindow *window, GtkWindowPosition position);

void gtk_window_set_transient_for (GtkWindow *window, GtkWindow *parent);

void gtk_window_set_attached_to (GtkWindow *window, GtkWidget *attach_widget);

void gtk_window_set_destroy_with_parent (GtkWindow *window, gboolean setting);

void gtk_window_set_hide_titlebar_when_maximized (GtkWindow *window, gboolean setting);

// void gtk_window_set_screen (GtkWindow *window, GdkScreen *screen);

// GdkScreen * gtk_window_get_screen (GtkWindow *window);

gboolean gtk_window_is_active (GtkWindow *window);

gboolean gtk_window_is_maximized (GtkWindow *window);

gboolean gtk_window_has_toplevel_focus (GtkWindow *window);

GList * gtk_window_list_toplevels (void);

void gtk_window_add_mnemonic (GtkWindow *window, guint keyval, GtkWidget *target);

void gtk_window_remove_mnemonic (GtkWindow *window, guint keyval, GtkWidget *target);

// gboolean gtk_window_mnemonic_activate (GtkWindow *window, guint keyval, GdkModifierType modifier);

gboolean gtk_window_activate_key (GtkWindow *window, GdkEventKey *event);

gboolean gtk_window_propagate_key_event (GtkWindow *window, GdkEventKey *event);

GtkWidget * gtk_window_get_focus (GtkWindow *window);

void gtk_window_set_focus (GtkWindow *window, GtkWidget *focus);

GtkWidget * gtk_window_get_default_widget (GtkWindow *window);

void gtk_window_set_default (GtkWindow *window, GtkWidget *default_widget);

void gtk_window_present (GtkWindow *window);

void gtk_window_present_with_time (GtkWindow *window, guint32 timestamp);

void gtk_window_close (GtkWindow *window);

void gtk_window_iconify (GtkWindow *window);

void gtk_window_deiconify (GtkWindow *window);

void gtk_window_stick (GtkWindow *window);

void gtk_window_unstick (GtkWindow *window);

void gtk_window_maximize (GtkWindow *window);

void gtk_window_unmaximize (GtkWindow *window);

void gtk_window_fullscreen (GtkWindow *window);

// void gtk_window_fullscreen_on_monitor (GtkWindow *window, GdkScreen *screen, gint monitor);

void gtk_window_unfullscreen (GtkWindow *window);

void gtk_window_set_keep_above (GtkWindow *window, gboolean setting);

void gtk_window_set_keep_below (GtkWindow *window, gboolean setting);

// void gtk_window_begin_resize_drag (GtkWindow *window, GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);

void gtk_window_begin_move_drag (GtkWindow *window, gint button, gint root_x, gint root_y, guint32 timestamp);

void gtk_window_set_decorated (GtkWindow *window, gboolean setting);

void gtk_window_set_deletable (GtkWindow *window, gboolean setting);

// void gtk_window_set_mnemonic_modifier (GtkWindow *window, GdkModifierType modifier);

void gtk_window_set_type_hint (GtkWindow *window, GdkWindowTypeHint hint);

void gtk_window_set_skip_taskbar_hint (GtkWindow *window, gboolean setting);

void gtk_window_set_skip_pager_hint (GtkWindow *window, gboolean setting);

void gtk_window_set_urgency_hint (GtkWindow *window, gboolean setting);

void gtk_window_set_accept_focus (GtkWindow *window, gboolean setting);

void gtk_window_set_focus_on_map (GtkWindow *window, gboolean setting);

void gtk_window_set_startup_id (GtkWindow *window, gchar *startup_id);

void gtk_window_set_role (GtkWindow *window, gchar *role);

gboolean gtk_window_get_decorated (GtkWindow *window);

gboolean gtk_window_get_deletable (GtkWindow *window);

GList * gtk_window_get_default_icon_list (void);

const gchar * gtk_window_get_default_icon_name (void);

void gtk_window_get_default_size (GtkWindow *window, gint *width, gint *height);

gboolean gtk_window_get_destroy_with_parent (GtkWindow *window);

gboolean gtk_window_get_hide_titlebar_when_maximized (GtkWindow *window);

GdkPixbuf * gtk_window_get_icon (GtkWindow *window);

GList * gtk_window_get_icon_list (GtkWindow *window);

const gchar * gtk_window_get_icon_name (GtkWindow *window);

// GdkModifierType gtk_window_get_mnemonic_modifier (GtkWindow *window);

gboolean gtk_window_get_modal (GtkWindow *window);

void gtk_window_get_position (GtkWindow *window, gint *root_x, gint *root_y);

const gchar * gtk_window_get_role (GtkWindow *window);

void gtk_window_get_size (GtkWindow *window, gint *width, gint *height);

const gchar * gtk_window_get_title (GtkWindow *window);

GtkWindow * gtk_window_get_transient_for (GtkWindow *window);

GtkWidget * gtk_window_get_attached_to (GtkWindow *window);

GdkWindowTypeHint gtk_window_get_type_hint (GtkWindow *window);

gboolean gtk_window_get_skip_taskbar_hint (GtkWindow *window);

gboolean gtk_window_get_skip_pager_hint (GtkWindow *window);

gboolean gtk_window_get_urgency_hint (GtkWindow *window);

gboolean gtk_window_get_accept_focus (GtkWindow *window);

gboolean gtk_window_get_focus_on_map (GtkWindow *window);

// GtkWindowGroup * gtk_window_get_group (GtkWindow *window);

gboolean gtk_window_has_group (GtkWindow *window);

GtkWindowType gtk_window_get_window_type (GtkWindow *window);

void gtk_window_move (GtkWindow *window, gint x, gint y);

// gboolean gtk_window_parse_geometry (GtkWindow *window, gchar *geometry);

// void gtk_window_reshow_with_initial_size (GtkWindow *window);

void gtk_window_resize (GtkWindow *window, gint width, gint height);

// void gtk_window_resize_to_geometry (GtkWindow *window, gint width, gint height);

void gtk_window_set_default_icon_list (GList *list);

void gtk_window_set_default_icon (GdkPixbuf *icon);

gboolean gtk_window_set_default_icon_from_file (gchar *filename, GError **err);

void gtk_window_set_default_icon_name (gchar *name);

void gtk_window_set_icon (GtkWindow *window, GdkPixbuf *icon);

void gtk_window_set_icon_list (GtkWindow *window, GList *list);

gboolean gtk_window_set_icon_from_file (GtkWindow *window, gchar *filename, GError **err);

void gtk_window_set_icon_name (GtkWindow *window, gchar *name);

void gtk_window_set_auto_startup_notification (gboolean setting);

// gdouble gtk_window_get_opacity (GtkWindow *window);

// void gtk_window_set_opacity (GtkWindow *window, gdouble opacity);

gboolean gtk_window_get_mnemonics_visible (GtkWindow *window);

void gtk_window_set_mnemonics_visible (GtkWindow *window, gboolean setting);

gboolean gtk_window_get_focus_visible (GtkWindow *window);

void gtk_window_set_focus_visible (GtkWindow *window, gboolean setting);

// void gtk_window_set_has_resize_grip (GtkWindow *window, gboolean value);

// gboolean gtk_window_get_has_resize_grip (GtkWindow *window);

// gboolean gtk_window_resize_grip_is_visible (GtkWindow *window);

// gboolean gtk_window_get_resize_grip_area (GtkWindow *window, GdkRectangle *rect);

// GtkApplication * gtk_window_get_application (GtkWindow *window);

// void gtk_window_set_application (GtkWindow *window, GtkApplication *application);

void gtk_window_set_has_user_ref_count (GtkWindow *window, gboolean setting);

void gtk_window_set_titlebar (GtkWindow *window, GtkWidget *titlebar);

GtkWidget * gtk_window_get_titlebar (GtkWindow *window);

void gtk_window_set_interactive_debugging (gboolean enable);

