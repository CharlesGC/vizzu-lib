import Chart from "/test/integration/test_options/style/plot/xAxis/ticks/color/chart.js";
import Hexa from "/test/integration/test_options/style/plot/xAxis/ticks/color/animated/hexa.js";


const testSteps = [
    Chart.static(Hexa.color(new URL(import.meta.url)).color1),
    Chart.animated(Hexa.color(new URL(import.meta.url)).color2)
]


export default testSteps