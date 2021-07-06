#ifndef VIZZU_CHART_H
#define VIZZU_CHART_H

#include <functional>
#include <memory>
#include <string>

#include "base/anim/control.h"
#include "base/gfx/canvas.h"
#include "base/gui/scheduler.h"
#include "base/util/eventdispatcher.h"
#include "chart/animator/animator.h"
#include "chart/generator/diagram.h"
#include "chart/main/layout.h"
#include "chart/main/stylesheet.h"
#include "chart/options/descriptor.h"
#include "data/table/datatable.h"
#include "events.h"

namespace Vizzu
{

class Chart :
	public Util::EventDispatcher::Sender
{
public:
	typedef std::function<void()> Event;
	Event onChanged;

	Chart();
	void draw(Gfx::ICanvas &canvas) const;
	void setBoundRect(const Geom::Rect &rect, Gfx::ICanvas &info);

	Data::DataTable &getTable() { return table; }
	Diag::OptionsSetterPtr getSetter();
	Stylesheet &getStylesheet() { return stylesheet; }
	Styles::Chart &getStyles() { return actStyles; }
	Diag::DiagramPtr getDiagram() const { return actDiagram; }
	::Anim::Control &getAnimControl() { return *animator; }
	Events &getEvents() { return events; }
	Util::EventDispatcher &getEventDispatcher() { return eventDispatcher; }

	Diag::Descriptor getDescriptor();

	void animate(Event onComplete = Event());
	const Diag::Marker *markerAt(const Geom::Point &point) const;

private:
	Layout layout;
	std::shared_ptr<Anim::Animator> animator;
	Data::DataTable table;
	Diag::DiagramPtr actDiagram;
	Diag::DiagramOptionsPtr nextOptions;
	Stylesheet stylesheet;
	Styles::Chart actStyles;
	Util::EventDispatcher eventDispatcher;
	Events events;

	Diag::DiagramPtr diagram(
	    Diag::DiagramOptionsPtr options) const;
};

}

#endif
