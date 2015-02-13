<?php
/**
 * @file
 * planterino.features.inc
 */

/**
 * Implements hook_node_info().
 */
function planterino_node_info() {
  $items = array(
    'plants_8_' => array(
      'name' => t('Plants 8)'),
      'base' => 'node_content',
      'description' => t('Pieru hirviö ei tykkää ilmavaivoista. 8)'),
      'has_title' => '1',
      'title_label' => t('Pieru'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
