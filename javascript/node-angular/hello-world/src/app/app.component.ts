import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  template: `<h1>{{ title }}</h1>`,
  styles: [`h1 { font-family: sans-serif; }`]
})
export class AppComponent {
  title = 'Hello World! from Angular';
}
