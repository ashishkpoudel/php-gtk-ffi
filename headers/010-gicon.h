guint g_icon_hash (gconstpointer icon);
gboolean g_icon_equal (GIcon *icon1, GIcon *icon2);
gchar *g_icon_to_string (GIcon *icon);
GIcon * g_icon_new_for_string (const gchar *str, GError **error);
// GVariant * g_icon_serialize (GIcon *icon);
// GIcon *g_icon_deserialize (GVariant *value);