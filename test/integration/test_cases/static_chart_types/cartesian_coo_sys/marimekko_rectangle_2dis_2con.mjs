import { data } from '/test/integration/test_data/chart_types_eu.js';

data.filter = record => 
record.Country == 'Bulgaria' || 
record.Country == 'Germany' || 
record.Country == 'Malta' || 
record.Country == 'Lithuania'

const testSteps = [
    chart => chart.animate(
        {
            data: data,
            descriptor:
            {
                channels:
                {
                    y: { attach: ['Joy factors', 'Value 2 (+)'], range: '0,1.1,%' },
                    x: { attach: ['Country', 'Value 2 (+)'] },
                    color: { attach: ['Joy factors'] },
                    label: { attach: ['Value 2 (+)', 'Country'] }
                },
                title: 'Stacked Mekko chart'
            }
        }
    )
];

export default testSteps;