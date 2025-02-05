# Changelog

## [Unreleased]

## [0.4.2] - 2021-12-22

### Fixed

- Fixed error on chart.animate({ style: null })

## [0.4.1] - 2021-12-22 - deprecated

## [0.4.0] - 2021-12-21

### Added

- animate() method returns an animation control object, 
  animation control methods are chainable.
- CSS properties can be used to style vizzu charts
  E.g. `--vizzu-plot-marker-colorPalette: whatever` for `{style: {plot: {marker: {colorPalette: "whatever"}}}}`
- `maxFractionDigits` style parameter added to labels showing numbers.
- WASM build size reduction.

### Fixed

- Marker label fade-in/fade-out fixed, values are interpolated only if measure 
  is not changed on label channel.

## [0.3.3] - 2021-10-17

### Fixed

- NPM package and d.ts file fixed for TypeScript projects.

## [0.3.2] - 2021-10-15

### Added

- Parts of markers outside of plot area are getting clipped. This behaviour can 
  be controlled by style.plot.overflow parameter.
- channel title parameter has "auto" value by default. "null" will switch the
  title off.

### Fixed

- Color range legend labels show min/max of color range instead of data min/max.
- Logo bottom padding fixed.

## [0.3.1] - 2021-09-24

### Fixed

- Data cube input recognition runtime error fixed.

## [0.3.0] - 2021-09-23

### Added

- First public release
