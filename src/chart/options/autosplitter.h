#ifndef CHART_OPTIONS_AUTOSPLITTER_H
#define CHART_OPTIONS_AUTOSPLITTER_H

#include "optionsdecorator.h"

namespace Vizzu
{
namespace Diag
{

class AutoSplitter : public OptionsDecorator
{
public:
	using OptionsDecorator::OptionsDecorator;

	OptionsSetter &addSeries(Scale::Type scaleType,
	    const Data::SeriesIndex &index,
	    std::optional<size_t> pos = std::nullopt) override;
	OptionsSetter &deleteSeries(Scale::Type scaleType,
	    const Data::SeriesIndex &index) override;

	OptionsSetter &setSplitted(bool split) override;
	OptionsSetter &setShape(const ShapeType::Type &type) override;
};

}
}

#endif
