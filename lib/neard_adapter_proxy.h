/*
 * Generated by gdbus-codegen 2.30.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __NEARD_ADAPTER_PROXY_H__
#define __NEARD_ADAPTER_PROXY_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.neard.Adapter */

#define ORG_NEARD_ADP_TYPE_ (org_neard_adp__get_type ())
#define ORG_NEARD_ADP_(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ORG_NEARD_ADP_TYPE_, orgNeardAdp))
#define ORG_NEARD_ADP_IS_(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ORG_NEARD_ADP_TYPE_))
#define ORG_NEARD_ADP__GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), ORG_NEARD_ADP_TYPE_, orgNeardAdpIface))

struct _orgNeardAdp;
typedef struct _orgNeardAdp orgNeardAdp;
typedef struct _orgNeardAdpIface orgNeardAdpIface;

struct _orgNeardAdpIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_get_properties) (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_publish) (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_unnamed_arg0);

  gboolean (*handle_set_property) (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1);

  gboolean (*handle_start_poll) (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_stop_poll) (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation);

  void (*property_changed) (
    orgNeardAdp *object,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1);

  void (*target_found) (
    orgNeardAdp *object,
    const gchar *arg_unnamed_arg0);

  void (*target_lost) (
    orgNeardAdp *object,
    const gchar *arg_unnamed_arg0);

};

GType org_neard_adp__get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *org_neard_adp__interface_info (void);
guint org_neard_adp__override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void org_neard_adp__complete_get_properties (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation,
    GVariant *unnamed_arg0);

void org_neard_adp__complete_set_property (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation);

void org_neard_adp__complete_start_poll (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation);

void org_neard_adp__complete_stop_poll (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation);

void org_neard_adp__complete_publish (
    orgNeardAdp *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void org_neard_adp__emit_property_changed (
    orgNeardAdp *object,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1);

void org_neard_adp__emit_target_found (
    orgNeardAdp *object,
    const gchar *arg_unnamed_arg0);

void org_neard_adp__emit_target_lost (
    orgNeardAdp *object,
    const gchar *arg_unnamed_arg0);



/* D-Bus method calls: */
void org_neard_adp__call_get_properties (
    orgNeardAdp *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_neard_adp__call_get_properties_finish (
    orgNeardAdp *proxy,
    GVariant **out_unnamed_arg0,
    GAsyncResult *res,
    GError **error);

gboolean org_neard_adp__call_get_properties_sync (
    orgNeardAdp *proxy,
    GVariant **out_unnamed_arg0,
    GCancellable *cancellable,
    GError **error);

void org_neard_adp__call_set_property (
    orgNeardAdp *proxy,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_neard_adp__call_set_property_finish (
    orgNeardAdp *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_neard_adp__call_set_property_sync (
    orgNeardAdp *proxy,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1,
    GCancellable *cancellable,
    GError **error);

void org_neard_adp__call_start_poll (
    orgNeardAdp *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_neard_adp__call_start_poll_finish (
    orgNeardAdp *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_neard_adp__call_start_poll_sync (
    orgNeardAdp *proxy,
    GCancellable *cancellable,
    GError **error);

void org_neard_adp__call_stop_poll (
    orgNeardAdp *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_neard_adp__call_stop_poll_finish (
    orgNeardAdp *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_neard_adp__call_stop_poll_sync (
    orgNeardAdp *proxy,
    GCancellable *cancellable,
    GError **error);

void org_neard_adp__call_publish (
    orgNeardAdp *proxy,
    GVariant *arg_unnamed_arg0,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_neard_adp__call_publish_finish (
    orgNeardAdp *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_neard_adp__call_publish_sync (
    orgNeardAdp *proxy,
    GVariant *arg_unnamed_arg0,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define ORG_NEARD_ADP_TYPE__PROXY (org_neard_adp__proxy_get_type ())
#define ORG_NEARD_ADP__PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ORG_NEARD_ADP_TYPE__PROXY, orgNeardAdpProxy))
#define ORG_NEARD_ADP__PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), ORG_NEARD_ADP_TYPE__PROXY, orgNeardAdpProxyClass))
#define ORG_NEARD_ADP__PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), ORG_NEARD_ADP_TYPE__PROXY, orgNeardAdpProxyClass))
#define ORG_NEARD_ADP_IS__PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ORG_NEARD_ADP_TYPE__PROXY))
#define ORG_NEARD_ADP_IS__PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), ORG_NEARD_ADP_TYPE__PROXY))

typedef struct _orgNeardAdpProxy orgNeardAdpProxy;
typedef struct _orgNeardAdpProxyClass orgNeardAdpProxyClass;
typedef struct _orgNeardAdpProxyPrivate orgNeardAdpProxyPrivate;

struct _orgNeardAdpProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  orgNeardAdpProxyPrivate *priv;
};

struct _orgNeardAdpProxyClass
{
  GDBusProxyClass parent_class;
};

GType org_neard_adp__proxy_get_type (void) G_GNUC_CONST;

void org_neard_adp__proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
orgNeardAdp *org_neard_adp__proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
orgNeardAdp *org_neard_adp__proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void org_neard_adp__proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
orgNeardAdp *org_neard_adp__proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
orgNeardAdp *org_neard_adp__proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define ORG_NEARD_ADP_TYPE__SKELETON (org_neard_adp__skeleton_get_type ())
#define ORG_NEARD_ADP__SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), ORG_NEARD_ADP_TYPE__SKELETON, orgNeardAdpSkeleton))
#define ORG_NEARD_ADP__SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), ORG_NEARD_ADP_TYPE__SKELETON, orgNeardAdpSkeletonClass))
#define ORG_NEARD_ADP__SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), ORG_NEARD_ADP_TYPE__SKELETON, orgNeardAdpSkeletonClass))
#define ORG_NEARD_ADP_IS__SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ORG_NEARD_ADP_TYPE__SKELETON))
#define ORG_NEARD_ADP_IS__SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), ORG_NEARD_ADP_TYPE__SKELETON))

typedef struct _orgNeardAdpSkeleton orgNeardAdpSkeleton;
typedef struct _orgNeardAdpSkeletonClass orgNeardAdpSkeletonClass;
typedef struct _orgNeardAdpSkeletonPrivate orgNeardAdpSkeletonPrivate;

struct _orgNeardAdpSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  orgNeardAdpSkeletonPrivate *priv;
};

struct _orgNeardAdpSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType org_neard_adp__skeleton_get_type (void) G_GNUC_CONST;

orgNeardAdp *org_neard_adp__skeleton_new (void);


G_END_DECLS

#endif /* __NEARD_ADAPTER_PROXY_H__ */