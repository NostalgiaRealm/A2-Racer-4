// All menu forms, re-exported by original class name.
import { CoolDialog } from '../base-forms.js';

export * from './group-main.js';
export * from './group-race.js';
export * from './group-dialogs.js';
export * from './group-options.js';

export const isDialog = (F) => F.prototype instanceof CoolDialog || F.modal === true;
