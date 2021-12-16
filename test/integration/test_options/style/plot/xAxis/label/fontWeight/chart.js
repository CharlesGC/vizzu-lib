import { data } from "/test/integration/test_options/data.js";


export default class Chart {
    static static(fontWeight) {
        return chart => {
            let name = fontWeight.pathname.split("/").pop().split(".").shift();
            let weight1 = name.split("-").shift();
            console.log("plot xAxis label fontWeight: " + weight1);
            return chart.animate(
            {
                data: data,
                config : {
                    channels: {
                        x: { attach: [ "Foo"] },
                        y: { attach: [ "Bar"] }
                    },
                    title: null,
                    legend: null,
                },
                style: {
                    plot: { 
                        xAxis: { 
                            label: { 
                                fontWeight: weight1
                            }
                        }
                    }
                }
            });
        }
    }

    static animated(fontWeight) {
        return chart => {
            let name = fontWeight.pathname.split("/").pop().split(".").shift();
            let weight2 = name.split("-").pop();
            console.log("plot xAxis label fontWeight: " + weight2);
            return chart.animate(
            {
                style: {
                    plot: { 
                        xAxis: { 
                            label: { 
                                fontWeight: weight2
                            }
                        }
                    }
                }
            })
        };
    }
};
