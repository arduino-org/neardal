/*
 * Generated by gdbus-codegen 2.30.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

#include "neard_record_proxy.h"

#ifdef G_OS_UNIX
#  include <gio/gunixfdlist.h>
#endif

typedef struct
{
  GDBusArgInfo parent_struct;
  gboolean use_gvariant;
} _ExtendedGDBusArgInfo;

typedef struct
{
  GDBusMethodInfo parent_struct;
  const gchar *signal_name;
  gboolean pass_fdlist;
} _ExtendedGDBusMethodInfo;

typedef struct
{
  GDBusSignalInfo parent_struct;
  const gchar *signal_name;
} _ExtendedGDBusSignalInfo;

typedef struct
{
  GDBusPropertyInfo parent_struct;
  const gchar *hyphen_name;
  gboolean use_gvariant;
} _ExtendedGDBusPropertyInfo;

typedef struct
{
  GDBusInterfaceInfo parent_struct;
  const gchar *hyphen_name;
} _ExtendedGDBusInterfaceInfo;

typedef struct
{
  const _ExtendedGDBusPropertyInfo *info;
  guint prop_id;
  GValue orig_value; /* the value before the change */
} ChangedProperty;

static void
_changed_property_free (ChangedProperty *data)
{
  g_value_unset (&data->orig_value);
  g_free (data);
}

static gboolean
_g_strv_equal0 (gchar **a, gchar **b)
{
  gboolean ret = FALSE;
  guint n;
  if (a == NULL && b == NULL)
    {
      ret = TRUE;
      goto out;
    }
  if (a == NULL || b == NULL)
    goto out;
  if (g_strv_length (a) != g_strv_length (b))
    goto out;
  for (n = 0; a[n] != NULL; n++)
    if (g_strcmp0 (a[n], b[n]) != 0)
      goto out;
  ret = TRUE;
out:
  return ret;
}

static gboolean
_g_variant_equal0 (GVariant *a, GVariant *b)
{
  gboolean ret = FALSE;
  if (a == NULL && b == NULL)
    {
      ret = TRUE;
      goto out;
    }
  if (a == NULL || b == NULL)
    goto out;
  ret = g_variant_equal (a, b);
out:
  return ret;
}

G_GNUC_UNUSED static gboolean
_g_value_equal (const GValue *a, const GValue *b)
{
  gboolean ret = FALSE;
  g_assert (G_VALUE_TYPE (a) == G_VALUE_TYPE (b));
  switch (G_VALUE_TYPE (a))
    {
      case G_TYPE_BOOLEAN:
        ret = (g_value_get_boolean (a) == g_value_get_boolean (b));
        break;
      case G_TYPE_UCHAR:
        ret = (g_value_get_uchar (a) == g_value_get_uchar (b));
        break;
      case G_TYPE_INT:
        ret = (g_value_get_int (a) == g_value_get_int (b));
        break;
      case G_TYPE_UINT:
        ret = (g_value_get_uint (a) == g_value_get_uint (b));
        break;
      case G_TYPE_INT64:
        ret = (g_value_get_int64 (a) == g_value_get_int64 (b));
        break;
      case G_TYPE_UINT64:
        ret = (g_value_get_uint64 (a) == g_value_get_uint64 (b));
        break;
      case G_TYPE_DOUBLE:
        ret = (g_value_get_double (a) == g_value_get_double (b));
        break;
      case G_TYPE_STRING:
        ret = (g_strcmp0 (g_value_get_string (a), g_value_get_string (b)) == 0);
        break;
      case G_TYPE_VARIANT:
        ret = _g_variant_equal0 (g_value_get_variant (a), g_value_get_variant (b));
        break;
      default:
        if (G_VALUE_TYPE (a) == G_TYPE_STRV)
          ret = _g_strv_equal0 (g_value_get_boxed (a), g_value_get_boxed (b));
        else
          g_critical ("_g_value_equal() does not handle type %s", g_type_name (G_VALUE_TYPE (a)));
        break;
    }
  return ret;
}

/* ------------------------------------------------------------------------
 * Code for interface org.neard.Record
 * ------------------------------------------------------------------------
 */

/**
 * SECTION:orgNeardRcd
 * @title: orgNeardRcd
 * @short_description: Generated C code for the org.neard.Record D-Bus interface
 *
 * This section contains code for working with the <link linkend="gdbus-interface-org-neard-Record.top_of_page">org.neard.Record</link> D-Bus interface in C.
 */

/* ---- Introspection data for org.neard.Record ---- */

static const _ExtendedGDBusArgInfo _org_neard_rcd__method_info_get_properties_OUT_ARG_unnamed_arg0 =
{
  {
    -1,
    "unnamed_arg0",
    "a{sv}",
    NULL
  },
  FALSE
};

static const _ExtendedGDBusArgInfo * const _org_neard_rcd__method_info_get_properties_OUT_ARG_pointers[] =
{
  &_org_neard_rcd__method_info_get_properties_OUT_ARG_unnamed_arg0,
  NULL
};

static const _ExtendedGDBusMethodInfo _org_neard_rcd__method_info_get_properties =
{
  {
    -1,
    "GetProperties",
    NULL,
    (GDBusArgInfo **) &_org_neard_rcd__method_info_get_properties_OUT_ARG_pointers,
    NULL
  },
  "handle-get-properties",
  FALSE
};

static const _ExtendedGDBusMethodInfo * const _org_neard_rcd__method_info_pointers[] =
{
  &_org_neard_rcd__method_info_get_properties,
  NULL
};

static const _ExtendedGDBusInterfaceInfo _org_neard_rcd__interface_info =
{
  {
    -1,
    "org.neard.Record",
    (GDBusMethodInfo **) &_org_neard_rcd__method_info_pointers,
    NULL,
    NULL,
    NULL
  },
  "",
};


/**
 * org_neard_rcd__interface_info:
 *
 * Gets a machine-readable description of the <link linkend="gdbus-interface-org-neard-Record.top_of_page">org.neard.Record</link> D-Bus interface.
 *
 * Returns: (transfer none): A #GDBusInterfaceInfo. Do not free.
 */
GDBusInterfaceInfo *
org_neard_rcd__interface_info (void)
{
  return (GDBusInterfaceInfo *) &_org_neard_rcd__interface_info;
}

/**
 * org_neard_rcd__override_properties:
 * @klass: The class structure for a #GObject<!-- -->-derived class.
 * @property_id_begin: The property id to assign to the first overridden property.
 *
 * Overrides all #GObject properties in the #orgNeardRcd interface for a concrete class.
 * The properties are overridden in the order they are defined.
 *
 * Returns: The last property id.
 */
guint
org_neard_rcd__override_properties (GObjectClass *klass, guint property_id_begin)
{
  return property_id_begin - 1;
}



/**
 * orgNeardRcd:
 *
 * Abstract interface type for the D-Bus interface <link linkend="gdbus-interface-org-neard-Record.top_of_page">org.neard.Record</link>.
 */

/**
 * orgNeardRcdIface:
 * @parent_iface: The parent interface.
 * @handle_get_properties: Handler for the #orgNeardRcd::handle-get-properties signal.
 *
 * Virtual table for the D-Bus interface <link linkend="gdbus-interface-org-neard-Record.top_of_page">org.neard.Record</link>.
 */

static void
org_neard_rcd__default_init (orgNeardRcdIface *iface)
{
  /* GObject signals for incoming D-Bus method calls: */
  /**
   * orgNeardRcd::handle-get-properties:
   * @object: A #orgNeardRcd.
   * @invocation: A #GDBusMethodInvocation.
   *
   * Signal emitted when a remote caller is invoking the <link linkend="gdbus-method-org-neard-Record.GetProperties">GetProperties()</link> D-Bus method.
   *
   * If a signal handler returns %TRUE, it means the signal handler will handle the invocation (e.g. take a reference to @invocation and eventually call org_neard_rcd__complete_get_properties() or e.g. g_dbus_method_invocation_return_error() on it) and no order signal handlers will run. If no signal handler handles the invocation, the %G_DBUS_ERROR_UNKNOWN_METHOD error is returned.
   *
   * Returns: %TRUE if the invocation was handled, %FALSE to let other signal handlers run.
   */
  g_signal_new ("handle-get-properties",
    G_TYPE_FROM_INTERFACE (iface),
    G_SIGNAL_RUN_LAST,
    G_STRUCT_OFFSET (orgNeardRcdIface, handle_get_properties),
    g_signal_accumulator_true_handled,
    NULL,
    g_cclosure_marshal_generic,
    G_TYPE_BOOLEAN,
    1,
    G_TYPE_DBUS_METHOD_INVOCATION);

}

typedef orgNeardRcdIface orgNeardRcdInterface;
G_DEFINE_INTERFACE (orgNeardRcd, org_neard_rcd_, G_TYPE_OBJECT);

/**
 * org_neard_rcd__call_get_properties:
 * @proxy: A #orgNeardRcdProxy.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied or %NULL.
 * @user_data: User data to pass to @callback.
 *
 * Asynchronously invokes the <link linkend="gdbus-method-org-neard-Record.GetProperties">GetProperties()</link> D-Bus method on @proxy.
 * When the operation is finished, @callback will be invoked in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link> of the thread you are calling this method from.
 * You can then call org_neard_rcd__call_get_properties_finish() to get the result of the operation.
 *
 * See org_neard_rcd__call_get_properties_sync() for the synchronous, blocking version of this method.
 */
void
org_neard_rcd__call_get_properties (
    orgNeardRcd *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
  g_dbus_proxy_call (G_DBUS_PROXY (proxy),
    "GetProperties",
    g_variant_new ("()"),
    G_DBUS_CALL_FLAGS_NONE,
    -1,
    cancellable,
    callback,
    user_data);
}

/**
 * org_neard_rcd__call_get_properties_finish:
 * @proxy: A #orgNeardRcdProxy.
 * @out_unnamed_arg0: (out): Return location for return parameter or %NULL to ignore.
 * @res: The #GAsyncResult obtained from the #GAsyncReadyCallback passed to org_neard_rcd__call_get_properties().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with org_neard_rcd__call_get_properties().
 *
 * Returns: (skip): %TRUE if the call succeded, %FALSE if @error is set.
 */
gboolean
org_neard_rcd__call_get_properties_finish (
    orgNeardRcd *proxy,
    GVariant **out_unnamed_arg0,
    GAsyncResult *res,
    GError **error)
{
  GVariant *_ret;
  _ret = g_dbus_proxy_call_finish (G_DBUS_PROXY (proxy), res, error);
  if (_ret == NULL)
    goto _out;
  g_variant_get (_ret,
                 "(@a{sv})",
                 out_unnamed_arg0);
  g_variant_unref (_ret);
_out:
  return _ret != NULL;
}

/**
 * org_neard_rcd__call_get_properties_sync:
 * @proxy: A #orgNeardRcdProxy.
 * @out_unnamed_arg0: (out): Return location for return parameter or %NULL to ignore.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously invokes the <link linkend="gdbus-method-org-neard-Record.GetProperties">GetProperties()</link> D-Bus method on @proxy. The calling thread is blocked until a reply is received.
 *
 * See org_neard_rcd__call_get_properties() for the asynchronous version of this method.
 *
 * Returns: (skip): %TRUE if the call succeded, %FALSE if @error is set.
 */
gboolean
org_neard_rcd__call_get_properties_sync (
    orgNeardRcd *proxy,
    GVariant **out_unnamed_arg0,
    GCancellable *cancellable,
    GError **error)
{
  GVariant *_ret;
  _ret = g_dbus_proxy_call_sync (G_DBUS_PROXY (proxy),
    "GetProperties",
    g_variant_new ("()"),
    G_DBUS_CALL_FLAGS_NONE,
    -1,
    cancellable,
    error);
  if (_ret == NULL)
    goto _out;
  g_variant_get (_ret,
                 "(@a{sv})",
                 out_unnamed_arg0);
  g_variant_unref (_ret);
_out:
  return _ret != NULL;
}

/**
 * org_neard_rcd__complete_get_properties:
 * @object: A #orgNeardRcd.
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @unnamed_arg0: Parameter to return.
 *
 * Helper function used in service implementations to finish handling invocations of the <link linkend="gdbus-method-org-neard-Record.GetProperties">GetProperties()</link> D-Bus method. If you instead want to finish handling an invocation by returning an error, use g_dbus_method_invocation_return_error() or similar.
 *
 * This method will free @invocation, you cannot use it afterwards.
 */
void
org_neard_rcd__complete_get_properties (
    orgNeardRcd *object,
    GDBusMethodInvocation *invocation,
    GVariant *unnamed_arg0)
{
  g_dbus_method_invocation_return_value (invocation,
    g_variant_new ("(@a{sv})",
                   unnamed_arg0));
}

/* ------------------------------------------------------------------------ */

/**
 * orgNeardRcdProxy:
 *
 * The #orgNeardRcdProxy structure contains only private data and should only be accessed using the provided API.
 */

/**
 * orgNeardRcdProxyClass:
 * @parent_class: The parent class.
 *
 * Class structure for #orgNeardRcdProxy.
 */

struct _orgNeardRcdProxyPrivate
{
  GData *qdata;
};

static void org_neard_rcd__proxy_iface_init (orgNeardRcdIface *iface);

G_DEFINE_TYPE_WITH_CODE (orgNeardRcdProxy, org_neard_rcd__proxy, G_TYPE_DBUS_PROXY,
                         G_IMPLEMENT_INTERFACE (ORG_NEARD_RCD_TYPE_, org_neard_rcd__proxy_iface_init));

static void
org_neard_rcd__proxy_finalize (GObject *object)
{
  orgNeardRcdProxy *proxy = ORG_NEARD_RCD__PROXY (object);
  g_datalist_clear (&proxy->priv->qdata);
  G_OBJECT_CLASS (org_neard_rcd__proxy_parent_class)->finalize (object);
}

static void
org_neard_rcd__proxy_get_property (GObject      *object,
  guint         prop_id,
  GValue       *value,
  GParamSpec   *pspec)
{
}

static void
org_neard_rcd__proxy_set_property (GObject      *object,
  guint         prop_id,
  const GValue *value,
  GParamSpec   *pspec)
{
}

static void
org_neard_rcd__proxy_g_signal (GDBusProxy *proxy,
  const gchar *sender_name,
  const gchar *signal_name,
  GVariant *parameters)
{
  _ExtendedGDBusSignalInfo *info;
  GVariantIter iter;
  GVariant *child;
  GValue *paramv;
  guint num_params;
  guint n;
  guint signal_id;
  info = (_ExtendedGDBusSignalInfo *) g_dbus_interface_info_lookup_signal ((GDBusInterfaceInfo *) &_org_neard_rcd__interface_info, signal_name);
  if (info == NULL)
    return;
  num_params = g_variant_n_children (parameters);
  paramv = g_new0 (GValue, num_params + 1);
  g_value_init (&paramv[0], ORG_NEARD_RCD_TYPE_);
  g_value_set_object (&paramv[0], proxy);
  g_variant_iter_init (&iter, parameters);
  n = 1;
  while ((child = g_variant_iter_next_value (&iter)) != NULL)
    {
      _ExtendedGDBusArgInfo *arg_info = (_ExtendedGDBusArgInfo *) info->parent_struct.args[n - 1];
      if (arg_info->use_gvariant)
        {
          g_value_init (&paramv[n], G_TYPE_VARIANT);
          g_value_set_variant (&paramv[n], child);
          n++;
        }
      else
        g_dbus_gvariant_to_gvalue (child, &paramv[n++]);
      g_variant_unref (child);
    }
  signal_id = g_signal_lookup (info->signal_name, ORG_NEARD_RCD_TYPE_);
  g_signal_emitv (paramv, signal_id, 0, NULL);
  for (n = 0; n < num_params + 1; n++)
    g_value_unset (&paramv[n]);
  g_free (paramv);
}

static void
org_neard_rcd__proxy_g_properties_changed (GDBusProxy *_proxy,
  GVariant *changed_properties,
  const gchar *const *invalidated_properties)
{
  orgNeardRcdProxy *proxy = ORG_NEARD_RCD__PROXY (_proxy);
  guint n;
  const gchar *key;
  GVariantIter *iter;
  _ExtendedGDBusPropertyInfo *info;
  g_variant_get (changed_properties, "a{sv}", &iter);
  while (g_variant_iter_next (iter, "{&sv}", &key, NULL))
    {
      info = (_ExtendedGDBusPropertyInfo *) g_dbus_interface_info_lookup_property ((GDBusInterfaceInfo *) &_org_neard_rcd__interface_info, key);
      g_datalist_remove_data (&proxy->priv->qdata, key);
      if (info != NULL)
        g_object_notify (G_OBJECT (proxy), info->hyphen_name);
    }
  g_variant_iter_free (iter);
  for (n = 0; invalidated_properties[n] != NULL; n++)
    {
      info = (_ExtendedGDBusPropertyInfo *) g_dbus_interface_info_lookup_property ((GDBusInterfaceInfo *) &_org_neard_rcd__interface_info, invalidated_properties[n]);
      g_datalist_remove_data (&proxy->priv->qdata, invalidated_properties[n]);
      if (info != NULL)
        g_object_notify (G_OBJECT (proxy), info->hyphen_name);
    }
}

static void
org_neard_rcd__proxy_init (orgNeardRcdProxy *proxy)
{
  proxy->priv = G_TYPE_INSTANCE_GET_PRIVATE (proxy, ORG_NEARD_RCD_TYPE__PROXY, orgNeardRcdProxyPrivate);
  g_dbus_proxy_set_interface_info (G_DBUS_PROXY (proxy), org_neard_rcd__interface_info ());
}

static void
org_neard_rcd__proxy_class_init (orgNeardRcdProxyClass *klass)
{
  GObjectClass *gobject_class;
  GDBusProxyClass *proxy_class;

  g_type_class_add_private (klass, sizeof (orgNeardRcdProxyPrivate));

  gobject_class = G_OBJECT_CLASS (klass);
  gobject_class->finalize     = org_neard_rcd__proxy_finalize;
  gobject_class->get_property = org_neard_rcd__proxy_get_property;
  gobject_class->set_property = org_neard_rcd__proxy_set_property;

  proxy_class = G_DBUS_PROXY_CLASS (klass);
  proxy_class->g_signal = org_neard_rcd__proxy_g_signal;
  proxy_class->g_properties_changed = org_neard_rcd__proxy_g_properties_changed;

}

static void
org_neard_rcd__proxy_iface_init (orgNeardRcdIface *iface)
{
}

/**
 * org_neard_rcd__proxy_new:
 * @connection: A #GDBusConnection.
 * @flags: Flags from the #GDBusProxyFlags enumeration.
 * @name: (allow-none): A bus name (well-known or unique) or %NULL if @connection is not a message bus connection.
 * @object_path: An object path.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: User data to pass to @callback.
 *
 * Asynchronously creates a proxy for the D-Bus interface <link linkend="gdbus-interface-org-neard-Record.top_of_page">org.neard.Record</link>. See g_dbus_proxy_new() for more details.
 *
 * When the operation is finished, @callback will be invoked in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link> of the thread you are calling this method from.
 * You can then call org_neard_rcd__proxy_new_finish() to get the result of the operation.
 *
 * See org_neard_rcd__proxy_new_sync() for the synchronous, blocking version of this constructor.
 */
void
org_neard_rcd__proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data)
{
  g_async_initable_new_async (ORG_NEARD_RCD_TYPE__PROXY, G_PRIORITY_DEFAULT, cancellable, callback, user_data, "g-flags", flags, "g-name", name, "g-connection", connection, "g-object-path", object_path, "g-interface-name", "org.neard.Record", NULL);
}

/**
 * org_neard_rcd__proxy_new_finish:
 * @res: The #GAsyncResult obtained from the #GAsyncReadyCallback passed to org_neard_rcd__proxy_new().
 * @error: Return location for error or %NULL
 *
 * Finishes an operation started with org_neard_rcd__proxy_new().
 *
 * Returns: (transfer full) (type orgNeardRcdProxy): The constructed proxy object or %NULL if @error is set.
 */
orgNeardRcd *
org_neard_rcd__proxy_new_finish (
    GAsyncResult        *res,
    GError             **error)
{
  GObject *ret;
  GObject *source_object;
  source_object = g_async_result_get_source_object (res);
  ret = g_async_initable_new_finish (G_ASYNC_INITABLE (source_object), res, error);
  g_object_unref (source_object);
  if (ret != NULL)
    return ORG_NEARD_RCD_ (ret);
  else
    return NULL;
}

/**
 * org_neard_rcd__proxy_new_sync:
 * @connection: A #GDBusConnection.
 * @flags: Flags from the #GDBusProxyFlags enumeration.
 * @name: (allow-none): A bus name (well-known or unique) or %NULL if @connection is not a message bus connection.
 * @object_path: An object path.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL
 *
 * Synchronously creates a proxy for the D-Bus interface <link linkend="gdbus-interface-org-neard-Record.top_of_page">org.neard.Record</link>. See g_dbus_proxy_new_sync() for more details.
 *
 * The calling thread is blocked until a reply is received.
 *
 * See org_neard_rcd__proxy_new() for the asynchronous version of this constructor.
 *
 * Returns: (transfer full) (type orgNeardRcdProxy): The constructed proxy object or %NULL if @error is set.
 */
orgNeardRcd *
org_neard_rcd__proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error)
{
  GInitable *ret;
  ret = g_initable_new (ORG_NEARD_RCD_TYPE__PROXY, cancellable, error, "g-flags", flags, "g-name", name, "g-connection", connection, "g-object-path", object_path, "g-interface-name", "org.neard.Record", NULL);
  if (ret != NULL)
    return ORG_NEARD_RCD_ (ret);
  else
    return NULL;
}


/**
 * org_neard_rcd__proxy_new_for_bus:
 * @bus_type: A #GBusType.
 * @flags: Flags from the #GDBusProxyFlags enumeration.
 * @name: A bus name (well-known or unique).
 * @object_path: An object path.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: User data to pass to @callback.
 *
 * Like org_neard_rcd__proxy_new() but takes a #GBusType instead of a #GDBusConnection.
 *
 * When the operation is finished, @callback will be invoked in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link> of the thread you are calling this method from.
 * You can then call org_neard_rcd__proxy_new_for_bus_finish() to get the result of the operation.
 *
 * See org_neard_rcd__proxy_new_for_bus_sync() for the synchronous, blocking version of this constructor.
 */
void
org_neard_rcd__proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data)
{
  g_async_initable_new_async (ORG_NEARD_RCD_TYPE__PROXY, G_PRIORITY_DEFAULT, cancellable, callback, user_data, "g-flags", flags, "g-name", name, "g-bus-type", bus_type, "g-object-path", object_path, "g-interface-name", "org.neard.Record", NULL);
}

/**
 * org_neard_rcd__proxy_new_for_bus_finish:
 * @res: The #GAsyncResult obtained from the #GAsyncReadyCallback passed to org_neard_rcd__proxy_new_for_bus().
 * @error: Return location for error or %NULL
 *
 * Finishes an operation started with org_neard_rcd__proxy_new_for_bus().
 *
 * Returns: (transfer full) (type orgNeardRcdProxy): The constructed proxy object or %NULL if @error is set.
 */
orgNeardRcd *
org_neard_rcd__proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error)
{
  GObject *ret;
  GObject *source_object;
  source_object = g_async_result_get_source_object (res);
  ret = g_async_initable_new_finish (G_ASYNC_INITABLE (source_object), res, error);
  g_object_unref (source_object);
  if (ret != NULL)
    return ORG_NEARD_RCD_ (ret);
  else
    return NULL;
}

/**
 * org_neard_rcd__proxy_new_for_bus_sync:
 * @bus_type: A #GBusType.
 * @flags: Flags from the #GDBusProxyFlags enumeration.
 * @name: A bus name (well-known or unique).
 * @object_path: An object path.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL
 *
 * Like org_neard_rcd__proxy_new_sync() but takes a #GBusType instead of a #GDBusConnection.
 *
 * The calling thread is blocked until a reply is received.
 *
 * See org_neard_rcd__proxy_new_for_bus() for the asynchronous version of this constructor.
 *
 * Returns: (transfer full) (type orgNeardRcdProxy): The constructed proxy object or %NULL if @error is set.
 */
orgNeardRcd *
org_neard_rcd__proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error)
{
  GInitable *ret;
  ret = g_initable_new (ORG_NEARD_RCD_TYPE__PROXY, cancellable, error, "g-flags", flags, "g-name", name, "g-bus-type", bus_type, "g-object-path", object_path, "g-interface-name", "org.neard.Record", NULL);
  if (ret != NULL)
    return ORG_NEARD_RCD_ (ret);
  else
    return NULL;
}


/* ------------------------------------------------------------------------ */

/**
 * orgNeardRcdSkeleton:
 *
 * The #orgNeardRcdSkeleton structure contains only private data and should only be accessed using the provided API.
 */

/**
 * orgNeardRcdSkeletonClass:
 * @parent_class: The parent class.
 *
 * Class structure for #orgNeardRcdSkeleton.
 */

struct _orgNeardRcdSkeletonPrivate
{
  GValueArray *properties;
  GList *changed_properties;
  GSource *changed_properties_idle_source;
  GMainContext *context;
  GMutex *lock;
};

static void
_org_neard_rcd__skeleton_handle_method_call (
  GDBusConnection *connection,
  const gchar *sender,
  const gchar *object_path,
  const gchar *interface_name,
  const gchar *method_name,
  GVariant *parameters,
  GDBusMethodInvocation *invocation,
  gpointer user_data)
{
  orgNeardRcdSkeleton *skeleton = ORG_NEARD_RCD__SKELETON (user_data);
  _ExtendedGDBusMethodInfo *info;
  GVariantIter iter;
  GVariant *child;
  GValue *paramv;
  guint num_params;
  guint num_extra;
  guint n;
  guint signal_id;
  GValue return_value = {0};
  info = (_ExtendedGDBusMethodInfo *) g_dbus_method_invocation_get_method_info (invocation);
  g_assert (info != NULL);
  num_params = g_variant_n_children (parameters);
  num_extra = info->pass_fdlist ? 3 : 2;  paramv = g_new0 (GValue, num_params + num_extra);
  n = 0;
  g_value_init (&paramv[n], ORG_NEARD_RCD_TYPE_);
  g_value_set_object (&paramv[n++], skeleton);
  g_value_init (&paramv[n], G_TYPE_DBUS_METHOD_INVOCATION);
  g_value_set_object (&paramv[n++], invocation);
  if (info->pass_fdlist)
    {
#ifdef G_OS_UNIX
      g_value_init (&paramv[n], G_TYPE_UNIX_FD_LIST);
      g_value_set_object (&paramv[n++], g_dbus_message_get_unix_fd_list (g_dbus_method_invocation_get_message (invocation)));
#else
      g_assert_not_reached ();
#endif
    }
  g_variant_iter_init (&iter, parameters);
  while ((child = g_variant_iter_next_value (&iter)) != NULL)
    {
      _ExtendedGDBusArgInfo *arg_info = (_ExtendedGDBusArgInfo *) info->parent_struct.in_args[n - num_extra];
      if (arg_info->use_gvariant)
        {
          g_value_init (&paramv[n], G_TYPE_VARIANT);
          g_value_set_variant (&paramv[n], child);
          n++;
        }
      else
        g_dbus_gvariant_to_gvalue (child, &paramv[n++]);
      g_variant_unref (child);
    }
  signal_id = g_signal_lookup (info->signal_name, ORG_NEARD_RCD_TYPE_);
  g_value_init (&return_value, G_TYPE_BOOLEAN);
  g_signal_emitv (paramv, signal_id, 0, &return_value);
  if (!g_value_get_boolean (&return_value))
    g_dbus_method_invocation_return_error (invocation, G_DBUS_ERROR, G_DBUS_ERROR_UNKNOWN_METHOD, "Method %s is not implemented on interface %s", method_name, interface_name);
  g_value_unset (&return_value);
  for (n = 0; n < num_params + num_extra; n++)
    g_value_unset (&paramv[n]);
  g_free (paramv);
}

static GVariant *
_org_neard_rcd__skeleton_handle_get_property (
  GDBusConnection *connection,
  const gchar *sender,
  const gchar *object_path,
  const gchar *interface_name,
  const gchar *property_name,
  GError **error,
  gpointer user_data)
{
  orgNeardRcdSkeleton *skeleton = ORG_NEARD_RCD__SKELETON (user_data);
  GValue value = {0};
  GParamSpec *pspec;
  _ExtendedGDBusPropertyInfo *info;
  GVariant *ret;
  ret = NULL;
  info = (_ExtendedGDBusPropertyInfo *) g_dbus_interface_info_lookup_property ((GDBusInterfaceInfo *) &_org_neard_rcd__interface_info, property_name);
  g_assert (info != NULL);
  pspec = g_object_class_find_property (G_OBJECT_GET_CLASS (skeleton), info->hyphen_name);
  if (pspec == NULL)
    {
      g_set_error (error, G_DBUS_ERROR, G_DBUS_ERROR_INVALID_ARGS, "No property with name %s", property_name);
    }
  else
    {
      g_value_init (&value, pspec->value_type);
      g_object_get_property (G_OBJECT (skeleton), info->hyphen_name, &value);
      ret = g_dbus_gvalue_to_gvariant (&value, G_VARIANT_TYPE (info->parent_struct.signature));
      g_value_unset (&value);
    }
  return ret;
}

static gboolean
_org_neard_rcd__skeleton_handle_set_property (
  GDBusConnection *connection,
  const gchar *sender,
  const gchar *object_path,
  const gchar *interface_name,
  const gchar *property_name,
  GVariant *variant,
  GError **error,
  gpointer user_data)
{
  orgNeardRcdSkeleton *skeleton = ORG_NEARD_RCD__SKELETON (user_data);
  GValue value = {0};
  GParamSpec *pspec;
  _ExtendedGDBusPropertyInfo *info;
  gboolean ret;
  ret = FALSE;
  info = (_ExtendedGDBusPropertyInfo *) g_dbus_interface_info_lookup_property ((GDBusInterfaceInfo *) &_org_neard_rcd__interface_info, property_name);
  g_assert (info != NULL);
  pspec = g_object_class_find_property (G_OBJECT_GET_CLASS (skeleton), info->hyphen_name);
  if (pspec == NULL)
    {
      g_set_error (error, G_DBUS_ERROR, G_DBUS_ERROR_INVALID_ARGS, "No property with name %s", property_name);
    }
  else
    {
      if (info->use_gvariant)
        g_value_set_variant (&value, variant);
      else
        g_dbus_gvariant_to_gvalue (variant, &value);
      g_object_set_property (G_OBJECT (skeleton), info->hyphen_name, &value);
      g_value_unset (&value);
      ret = TRUE;
    }
  return ret;
}

static const GDBusInterfaceVTable _org_neard_rcd__skeleton_vtable =
{
  _org_neard_rcd__skeleton_handle_method_call,
  _org_neard_rcd__skeleton_handle_get_property,
  _org_neard_rcd__skeleton_handle_set_property
};

static GDBusInterfaceInfo *
org_neard_rcd__skeleton_dbus_interface_get_info (GDBusInterfaceSkeleton *skeleton)
{
  return org_neard_rcd__interface_info ();
}

static GDBusInterfaceVTable *
org_neard_rcd__skeleton_dbus_interface_get_vtable (GDBusInterfaceSkeleton *skeleton)
{
  return (GDBusInterfaceVTable *) &_org_neard_rcd__skeleton_vtable;
}

static GVariant *
org_neard_rcd__skeleton_dbus_interface_get_properties (GDBusInterfaceSkeleton *_skeleton)
{
  orgNeardRcdSkeleton *skeleton = ORG_NEARD_RCD__SKELETON (_skeleton);

  GVariantBuilder builder;
  guint n;
  g_variant_builder_init (&builder, G_VARIANT_TYPE ("a{sv}"));
  if (_org_neard_rcd__interface_info.parent_struct.properties == NULL)
    goto out;
  for (n = 0; _org_neard_rcd__interface_info.parent_struct.properties[n] != NULL; n++)
    {
      GDBusPropertyInfo *info = _org_neard_rcd__interface_info.parent_struct.properties[n];
      if (info->flags & G_DBUS_PROPERTY_INFO_FLAGS_READABLE)
        {
          GVariant *value;
          value = _org_neard_rcd__skeleton_handle_get_property (g_dbus_interface_skeleton_get_connection (G_DBUS_INTERFACE_SKELETON (skeleton)), NULL, g_dbus_interface_skeleton_get_object_path (G_DBUS_INTERFACE_SKELETON (skeleton)), "org.neard.Record", info->name, NULL, skeleton);
          if (value != NULL)
            {
              g_variant_take_ref (value);
              g_variant_builder_add (&builder, "{sv}", info->name, value);
              g_variant_unref (value);
            }
        }
    }
out:
  return g_variant_builder_end (&builder);
}

static void
org_neard_rcd__skeleton_dbus_interface_flush (GDBusInterfaceSkeleton *_skeleton)
{
}

static void org_neard_rcd__skeleton_iface_init (orgNeardRcdIface *iface);
G_DEFINE_TYPE_WITH_CODE (orgNeardRcdSkeleton, org_neard_rcd__skeleton, G_TYPE_DBUS_INTERFACE_SKELETON,
                         G_IMPLEMENT_INTERFACE (ORG_NEARD_RCD_TYPE_, org_neard_rcd__skeleton_iface_init));

static void
org_neard_rcd__skeleton_finalize (GObject *object)
{
  orgNeardRcdSkeleton *skeleton = ORG_NEARD_RCD__SKELETON (object);
  g_list_foreach (skeleton->priv->changed_properties, (GFunc) _changed_property_free, NULL);
  g_list_free (skeleton->priv->changed_properties);
  if (skeleton->priv->changed_properties_idle_source != NULL)
    g_source_destroy (skeleton->priv->changed_properties_idle_source);
  if (skeleton->priv->context != NULL)
    g_main_context_unref (skeleton->priv->context);
  g_mutex_free (skeleton->priv->lock);
  G_OBJECT_CLASS (org_neard_rcd__skeleton_parent_class)->finalize (object);
}

static void
org_neard_rcd__skeleton_init (orgNeardRcdSkeleton *skeleton)
{
  skeleton->priv = G_TYPE_INSTANCE_GET_PRIVATE (skeleton, ORG_NEARD_RCD_TYPE__SKELETON, orgNeardRcdSkeletonPrivate);
  skeleton->priv->lock = g_mutex_new ();
  skeleton->priv->context = g_main_context_get_thread_default ();
  if (skeleton->priv->context != NULL)
    g_main_context_ref (skeleton->priv->context);
}

static void
org_neard_rcd__skeleton_class_init (orgNeardRcdSkeletonClass *klass)
{
  GObjectClass *gobject_class;
  GDBusInterfaceSkeletonClass *skeleton_class;

  g_type_class_add_private (klass, sizeof (orgNeardRcdSkeletonPrivate));

  gobject_class = G_OBJECT_CLASS (klass);
  gobject_class->finalize = org_neard_rcd__skeleton_finalize;

  skeleton_class = G_DBUS_INTERFACE_SKELETON_CLASS (klass);
  skeleton_class->get_info = org_neard_rcd__skeleton_dbus_interface_get_info;
  skeleton_class->get_properties = org_neard_rcd__skeleton_dbus_interface_get_properties;
  skeleton_class->flush = org_neard_rcd__skeleton_dbus_interface_flush;
  skeleton_class->get_vtable = org_neard_rcd__skeleton_dbus_interface_get_vtable;
}

static void
org_neard_rcd__skeleton_iface_init (orgNeardRcdIface *iface)
{
}

/**
 * org_neard_rcd__skeleton_new:
 *
 * Creates a skeleton object for the D-Bus interface <link linkend="gdbus-interface-org-neard-Record.top_of_page">org.neard.Record</link>.
 *
 * Returns: (transfer full) (type orgNeardRcdSkeleton): The skeleton object.
 */
orgNeardRcd *
org_neard_rcd__skeleton_new (void)
{
  return ORG_NEARD_RCD_ (g_object_new (ORG_NEARD_RCD_TYPE__SKELETON, NULL));
}
