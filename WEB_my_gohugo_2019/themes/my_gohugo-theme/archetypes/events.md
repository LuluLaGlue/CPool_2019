---
title: "{{ replace .Name "-" " " | title }}"
when: "{{ now.Format "2006-01-02" }}"
adress: ""
postalCode: "75000"
city: "Paris"
label: ""
description: ""
photos:
draft: true
important: false
associations: ""
---