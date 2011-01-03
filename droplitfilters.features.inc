<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function droplitfilters_ctools_plugin_api() {
  module_load_include('inc', 'droplitfilters', 'droplitfilters.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitfilters_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_filter_default_formats().
 */
function droplitfilters_filter_default_formats() {
  module_load_include('inc', 'droplitfilters', 'droplitfilters.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitfilters_filter_default_formats', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function droplitfilters_user_default_permissions() {
  module_load_include('inc', 'droplitfilters', 'droplitfilters.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitfilters_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function droplitfilters_strongarm() {
  module_load_include('inc', 'droplitfilters', 'droplitfilters.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitfilters_strongarm', $args);
}
