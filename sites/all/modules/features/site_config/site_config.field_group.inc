<?php
/**
 * @file
 * site_config.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function site_config_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_link|node|project|full';
  $field_group->group_name = 'group_project_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Link',
    'weight' => '1',
    'children' => array(
      0 => 'field_project_image',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Project Link',
      'instance_settings' => array(
        'link_to' => 'field_project_link',
        'classes' => 'group-project-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_project_link|node|project|full'] = $field_group;

  return $export;
}
