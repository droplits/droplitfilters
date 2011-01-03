<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _droplitfilters_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_filter_default_formats().
 */
function _droplitfilters_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML
  $formats[] = array(
    'name' => 'Filtered HTML',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '-9',
      ),
      '1' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '-10',
      ),
      '2' => array(
        'module' => 'wysiwyg_filter',
        'delta' => '0',
        'weight' => '-8',
      ),
    ),
  );

  return $formats;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _droplitfilters_user_default_permissions() {
  $permissions = array();

  // Exported permission: access ckeditor
  $permissions[] = array(
    'name' => 'access ckeditor',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _droplitfilters_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_1';
  $strongarm->value = 1;

  $export['filter_html_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_1';
  $strongarm->value = '72';

  $export['filter_url_length_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'format';
  $strongarm->value = '1';

  $export['format'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    '1' => array(
      'name' => 'Site Administrators',
      'filesize' => '0',
      'quota' => '0',
      'tuquota' => '0',
      'extensions' => '*',
      'dimensions' => '0',
      'filenum' => '0',
      'directories' => array(
        '0' => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(),
    ),
    '2' => array(
      'name' => 'Site Users',
      'filesize' => '5',
      'quota' => '0',
      'tuquota' => '40',
      'extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp',
      'dimensions' => '1200x1200',
      'filenum' => '1',
      'directories' => array(
        '0' => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(),
    ),
  );

  $export['imce_profiles'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    '3' => array(
      'pid' => '1',
    ),
    '2' => array(
      'pid' => '2',
    ),
    '1' => array(
      'pid' => '0',
    ),
  );

  $export['imce_roles_profiles'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_classes_1';
  $strongarm->value = array(
    '0' => 'clear-block',
    '2' => 'image-*',
    '4' => 'pullquote',
    '6' => 'rte*',
    '8' => 'highlight-*',
  );

  $export['wysiwyg_filter_valid_classes_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_parsed_1';
  $strongarm->value = array(
    'a' => array(
      'href' => array(),
      'target' => array(),
      'id' => array(),
      'name' => array(),
      'class' => array(),
      'title' => array(),
    ),
    'acronym' => array(
      'class' => array(),
      'title' => array(),
    ),
    'address' => array(
      'class' => array(),
      'title' => array(),
    ),
    'b' => array(
      'class' => array(),
      'title' => array(),
    ),
    'blockquote' => array(
      'class' => array(),
      'title' => array(),
    ),
    'br' => array(
      'class' => array(),
      'title' => array(),
    ),
    'caption' => array(
      'class' => array(),
      'title' => array(),
    ),
    'cite' => array(
      'class' => array(),
      'title' => array(),
    ),
    'code' => array(
      'class' => array(),
      'title' => array(),
    ),
    'col' => array(
      'class' => array(),
      'title' => array(),
    ),
    'colgroup' => array(
      'class' => array(),
      'title' => array(),
    ),
    'dd' => array(
      'class' => array(),
      'title' => array(),
    ),
    'del' => array(
      'class' => array(),
      'title' => array(),
    ),
    'div' => array(
      'align' => array(
        'values' => array(
          '0' => 'center',
          '1' => 'justify',
          '2' => 'left',
          '3' => 'right',
        ),
      ),
      'class' => array(),
      'title' => array(),
    ),
    'dl' => array(
      'class' => array(),
      'title' => array(),
    ),
    'dt' => array(
      'class' => array(),
      'title' => array(),
    ),
    'em' => array(
      'class' => array(),
      'title' => array(),
    ),
    'embed' => array(
      'src' => array(),
      'type' => array(),
      'allowfullscreen' => array(),
      'allowscriptaccess' => array(),
      'width' => array(),
      'height' => array(),
      'class' => array(),
      'title' => array(),
    ),
    'h3' => array(
      'class' => array(),
      'title' => array(),
    ),
    'h4' => array(
      'class' => array(),
      'title' => array(),
    ),
    'h5' => array(
      'class' => array(),
      'title' => array(),
    ),
    'h6' => array(
      'class' => array(),
      'title' => array(),
    ),
    'hr' => array(
      'class' => array(),
      'title' => array(),
    ),
    'i' => array(
      'class' => array(),
      'title' => array(),
    ),
    'img' => array(
      'src' => array(),
      'width' => array(),
      'height' => array(),
      'alt' => array(),
      'border' => array(
        'forced' => '0',
      ),
      'class' => array(),
      'title' => array(),
    ),
    'kbd' => array(
      'class' => array(),
      'title' => array(),
    ),
    'li' => array(
      'class' => array(),
      'title' => array(),
    ),
    'object' => array(
      'width' => array(),
      'height' => array(),
      'class' => array(),
      'title' => array(),
    ),
    'ol' => array(
      'class' => array(),
      'title' => array(),
    ),
    'p' => array(
      'align' => array(
        'values' => array(
          '0' => 'center',
          '1' => 'justify',
          '2' => 'left',
          '3' => 'right',
        ),
      ),
      'class' => array(),
      'title' => array(),
    ),
    'param' => array(
      'name' => array(),
      'value' => array(),
      'class' => array(),
      'title' => array(),
    ),
    'pre' => array(
      'class' => array(),
      'title' => array(),
    ),
    'q' => array(
      'class' => array(),
      'title' => array(),
    ),
    'samp' => array(
      'class' => array(),
      'title' => array(),
    ),
    'span' => array(
      'class' => array(),
      'title' => array(),
    ),
    'strike' => array(
      'class' => array(),
      'title' => array(),
    ),
    'strong' => array(
      'class' => array(),
      'title' => array(),
    ),
    'sub' => array(
      'class' => array(),
      'title' => array(),
    ),
    'sup' => array(
      'class' => array(),
      'title' => array(),
    ),
    'table' => array(
      'width' => array(),
      'cellpadding' => array(),
      'cellspacing' => array(
        'default' => '0',
      ),
      'border' => array(
        'default' => '0',
      ),
      'class' => array(),
      'title' => array(),
    ),
    'tbody' => array(
      'class' => array(),
      'title' => array(),
    ),
    'td' => array(
      'align' => array(),
      'valign' => array(),
      'width' => array(),
      'class' => array(),
      'title' => array(),
    ),
    'tfoot' => array(
      'class' => array(),
      'title' => array(),
    ),
    'th' => array(
      'align' => array(),
      'valign' => array(),
      'width' => array(),
      'class' => array(),
      'title' => array(),
    ),
    'thead' => array(
      'class' => array(),
      'title' => array(),
    ),
    'tr' => array(
      'align' => array(),
      'valign' => array(),
      'class' => array(),
      'title' => array(),
    ),
    'ul' => array(
      'class' => array(),
      'title' => array(),
    ),
  );

  $export['wysiwyg_filter_valid_elements_parsed_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_raw_1';
  $strongarm->value = '@[class|title],
a[href|target|id|name],
img[src|width|height|alt|border:0],
em/i,strong/b,strike,del,sub,sup,q,acronym,samp,kbd,
ul,ol,li,dl,dt,dd,
p[align<center?justify?left?right],br,hr,
div[align<center?justify?left?right],span,
table[width|cellpadding|cellspacing=0|border=0],tr[align|valign],td[align|valign|width],tbody,th[align|valign|width],thead,tfoot,colgroup,col,caption,
address,blockquote,pre,cite,code,
h3,h4,h5,h6,
object[width|height],param[name|value],embed[src|type|allowfullscreen|allowscriptaccess|width|height]';

  $export['wysiwyg_filter_valid_elements_raw_1'] = $strongarm;
  return $export;
}
