'use strict';

global.chai = require('chai');
global.chai.should();

global.expect = global.chai.expect;
global.assert = global.chai.assert;
global.sinon = require('sinon');

global.sinonChai = require('sinon-chai');
global.chai.use(global.sinonChai);