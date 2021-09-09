<?php

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalcon.io>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

declare(strict_types=1);

namespace Phalcon\Test\Integration\Storage\Adapter\Memory;

use Phalcon\Storage\Adapter\Memory;
use Phalcon\Storage\SerializerFactory;
use IntegrationTester;

class GetPrefixCest
{
    /**
     * Tests Phalcon\Storage\Adapter\Memory :: getPrefix()
     *
     * @author Phalcon Team <team@phalcon.io>
     * @since  2019-03-31
     */
    public function storageAdapterMemoryGetSetPrefix(IntegrationTester $I)
    {
        $I->wantToTest('Storage\Adapter\Memory - getPrefix()');

        $serializer = new SerializerFactory();

        $adapter = new Memory(
            $serializer,
            [
                'prefix' => 'my-prefix',
            ]
        );

        $I->assertEquals('my-prefix', $adapter->getPrefix());
    }

    /**
     * Tests Phalcon\Storage\Adapter\Memory :: getPrefix() - default
     *
     * @author Phalcon Team <team@phalcon.io>
     * @since  2019-03-31
     */
    public function storageAdapterMemoryGetSetPrefixDefault(IntegrationTester $I)
    {
        $I->wantToTest('Storage\Adapter\Memory - getPrefix() - default');

        $serializer = new SerializerFactory();
        $adapter    = new Memory($serializer);

        $I->assertEquals('ph-memo-', $adapter->getPrefix());
    }

    /**
     * Tests Phalcon\Storage\Adapter\Memory :: getPrefix() - empty
     *
     * @author Phalcon Team <team@phalcon.io>
     * @since  2020-09-09
     * @issue  15480
     */
    public function storageAdapterMemoryGetSetPrefixEmpty(IntegrationTester $I)
    {
        $I->wantToTest('Storage\Adapter\Memory - getPrefix() - empty');

        $serializer = new SerializerFactory();
        $adapter = new Memory(
            $serializer,
            [
                'prefix' => '',
            ]
        );

        $I->assertEquals('', $adapter->getPrefix());
    }
}
